#ifndef SEVER_H
#define SEVER_H

#include <QWidget>

class QTcpServer;
class QTcpSocket;
class QTextEdit;

class Server: public QWidget{
    Q_OBJECT

private:
    QTcpServer *_tcpServer;
    QTcpSocket *_clientSocket;

    quint16 _nextBlockSize;

    QTextEdit *_text;

    void sendToClient(QTcpSocket *socket, const QString &str);

public:
    Server(quint16 port);

public slots:
    virtual void slotNewConnection();
    void slotReadClient();
};

#endif // SEVER_H
