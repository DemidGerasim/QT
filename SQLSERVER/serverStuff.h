#ifndef SERVERSTUFF_H
#define SERVERSTUFF_H

#include <QTcpServer>
#include <QTcpSocket>
#include <QDataStream>
#include <QList>

#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>

#include "fstream"
#include <iostream>
#include <sstream>

class ServerStuff : public QObject
{
    Q_OBJECT

public:
    ServerStuff(QObject *pwgt);
    QTcpServer *tcpServer;
    QList<QTcpSocket *> getClients();
    void sendClient(const QString &message);

public slots:
    virtual void newConnection();
    void readClient();
    void gotDisconnection();
    qint64 sendToClient(QTcpSocket *socket, const QString &str);

signals:
    void gotNewMesssage(QString msg);
    void smbDisconnected();

private:
    QString statusLogIn, statusAdd, statusDelete, showTable, searchTable, changeTable;
    QString log, add, ddelete;

    quint16 m_nNextBlockSize;
    QList<QTcpSocket*> clients;
};

#endif // SERVERSTUFF_H
