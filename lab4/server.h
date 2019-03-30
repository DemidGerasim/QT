#ifndef SERVER_H
#define SERVER_H
#include <QWidget>
#include <QTextEdit>
#include <QTcpServer>
#include <QTcpSocket>
#include <QApplication>
#include <QVBoxLayout>
#include <QLabel>

class Server: public QWidget
{
    Q_OBJECT
private:
    QTcpServer *_server;
    QTextEdit *_text;
    QTcpSocket *_socket;

public:
    Server(quint16 port);

    ~Server()
    {

    }

public slots:
    void slotNewConnection();
    void slotReadClient();
};

#endif // SERVER_H
