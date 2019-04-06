#ifndef CLIENT_H
#define CLIENT_H
#include <QWidget>
#include <QTextEdit>
#include <QTcpServer>
#include <QTcpSocket>
#include <QApplication>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class Client
{
    Q_OBJECT

private:
    QTcpSocket *_socket;
    QTextEdit *_textInfo;
    QLineEdit *_textInput;
    QPushButton *_button;

public:
    Client();
  };

void slotConnection();
void slotReadyRead();
void slotSendToServer();

#endif // CLIENT_H
