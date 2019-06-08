#include "serverStuff.h"

ServerStuff::ServerStuff(QObject *pwgt) : QObject(pwgt), m_nNextBlockSize(0)
{
    tcpServer = new QTcpServer(this);
}

QList<QTcpSocket *> ServerStuff::getClients()
{
    return clients;
}

void ServerStuff::newConnection()
{
    QTcpSocket *clientSocket = tcpServer->nextPendingConnection();

    connect(clientSocket, &QTcpSocket::disconnected, clientSocket, &QTcpSocket::deleteLater);
    connect(clientSocket, &QTcpSocket::readyRead, this, &ServerStuff::readClient);
    connect(clientSocket, &QTcpSocket::disconnected, this, &ServerStuff::gotDisconnection);

    clients << clientSocket;

    sendToClient(clientSocket, "Reply: connection established");
}



using namespace std;

void ServerStuff::readClient()
{
    QTcpSocket *clientSocket = (QTcpSocket*)sender();

    QDataStream in(clientSocket);
    //in.setVersion(QDataStream::Qt_5_10);
    for (;;)
    {


        if (!m_nNextBlockSize) {
                if (clientSocket->bytesAvailable() < sizeof(quint16)) { break; }
            in >> m_nNextBlockSize;
        }

        if (clientSocket->bytesAvailable() < m_nNextBlockSize) { break; }
        QString message;
        in >> message;
        qDebug() << "CRIPT: " + message;




        if(message != "STATUS_ADD"){
            if(statusLogIn != "LOG_IN"){
                 statusLogIn = message;
                 qDebug() << "STATUS: " + statusLogIn;
            }
        }

            if(statusLogIn == "LOG_IN" && message != "LOG_IN"){
                QSqlQuery query(QSqlDatabase::database("MyConnect"));
                query.prepare(QString(message));

            if(!query.exec()){
                qDebug() << "Failad: Query failed to Execute";
            }else {
                    statusLogIn = "";
                while(query.next()){
                    log = message;
                    QString usernameFromDB = query.value(1).toString();
                    QString passwordFromDB = query.value(2).toString();
                    QString status = query.value(5).toString();

                    if(status == "admin")
                    {
                        QByteArray admin = "LOG_IN_ADMIN";
                        qDebug() << "LOG_IN_ADMIN";
                         sendToClient(clientSocket, admin);
                    }

                    if(status == "user")
                    {
                        QByteArray user = "LOG_IN_USER";
                        qDebug() << "LOG_IN_USER";
                         sendToClient(clientSocket, user);
                    }

                    emit gotNewMesssage("Request: " + message);
                    emit gotNewMesssage("Success: Attempt to enter...\n");

                    qDebug() << "Success: Attempt to enter...";


                }

            }
        }



            if(statusAdd != "STATUS_ADD" && message != "LOG_IN" && message != log){
                 statusAdd = message;
                 qDebug() << "STATUS add: " + statusAdd;
            }

                if(statusAdd == "STATUS_ADD" && message != "STATUS_ADD"){
                    QSqlQuery query(QSqlDatabase::database("MyConnect"));
                    query.prepare(QString(message));

                    if(!query.exec()){
                            statusAdd = "";
                            add = message;

                            emit gotNewMesssage("Success: Success Add\n");
                            qDebug() << "Success: Success Add";


                            QByteArray add = "STATUS_ADD";
                            sendToClient(clientSocket, add);
                        }

                }

                if(statusDelete != "STATUS_DELETE" && message != "LOG_IN" && message != log){
                     statusDelete = message;
                     qDebug() << "STATUS delete: " + statusDelete;
                }

                    if(statusDelete == "STATUS_DELETE" && message != "STATUS_DELETE"){
                        QSqlQuery query(QSqlDatabase::database("MyConnect"));
                        query.prepare(QString(message));

                        if(query.exec()){

                                statusDelete = "";


                                emit gotNewMesssage("Success: Success Delete\n");

                                QByteArray deleted = "STATUS_DELETE";

                                sendToClient(clientSocket, deleted);

                            }

                    }


                    if(changeTable != "CHANGE"){
                         changeTable = message;
                         qDebug() << "STATUS CHANGE: " + changeTable;
                    }

                    if(changeTable == "CHANGE" && message != "CHANGE")
                    {
                        QSqlQuery query(QSqlDatabase::database("MyConnect"));
                        query.prepare(QString(message));

                        if(!query.exec()){
                            changeTable = "";
                            QString ch = "CHANGE";
                            sendToClient(clientSocket, ch);


                            emit gotNewMesssage("Success: Success Change\n");
                        }
                    }


                    if(showTable != "SHOW_TABLE"){
                         showTable = message;
                         qDebug() << "STATUS SHOW_TABLE: " + showTable;
                    }

                    if(showTable == "SHOW_TABLE" && message != "SHOW_TABLE")
                    {
                        showTable = "";

                        QString basa = "";
                        QSqlQuery query(QSqlDatabase::database("MyConnect"));
                        query.exec(message);

                        while (query.next())
                        {
                            basa += "\n--------------------------------      ID:" + query.value(0).toString() + "\n      Username:" + query.value(1).toString() + "\n      Password:" +
                                    query.value(2).toString() + "\n      Email:" + query.value(3).toString()+ "\n      Phone:" +
                                    query.value(4).toString() +  "\n      Status:" + query.value(5).toString();
                        }




                        QByteArray show = "SHOW_TABLE";
                        sendToClient(clientSocket, show);
                        sendToClient(clientSocket, basa);


                        showTable = "";

                        emit gotNewMesssage("Success: Show Table\n");

                    }


                    if(searchTable != "SEARCH"){
                         searchTable = message;

                    }

                    if(searchTable == "SEARCH" && message != "SEARCH")
                    {
                        searchTable = "";

                        QString basa = "";
                        QSqlQuery query(QSqlDatabase::database("MyConnect"));
                        query.exec(message);

                        while (query.next())
                        {
                            basa += "\n--------------------------------      ID:" + query.value(0).toString() + "\n      Username:" + query.value(1).toString() + "\n      Password:" +
                                    query.value(2).toString() + "\n      Email:" + query.value(3).toString()+ "\n      Phone:" +
                                    query.value(4).toString() +  "\n      Status:" + query.value(5).toString();
                        }



                        QByteArray show = "SEARCH";
                        sendToClient(clientSocket, show);
                        sendToClient(clientSocket, basa);

                        searchTable = "";
                        emit gotNewMesssage("Success: Success Search\n");
                    }
        m_nNextBlockSize = 0;

    }
}

void ServerStuff::gotDisconnection()
{
    clients.removeAt(clients.indexOf((QTcpSocket*)sender()));
    emit smbDisconnected();
}

qint64 ServerStuff::sendToClient(QTcpSocket* socket, const QString& str)
{
    QByteArray arrBlock;
    QDataStream out(&arrBlock, QIODevice::WriteOnly);

    out << quint16(0) << str;

    out.device()->seek(0);
    out << quint16(arrBlock.size() - sizeof(quint16));

    return socket->write(arrBlock);
}


