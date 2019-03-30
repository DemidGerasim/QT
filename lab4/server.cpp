#include "server.h"

Server::Server(quint16 port)
{

_server = new QTcpServer(this);

if(!_server->listen(QHostAddress::Any, 8080))
{
_server->close();
return;
}

connect(_server, SIGNAL(newConnection()),this, SLOT(slotNewConnection()));

_text = new QTextEdit();
_text->setReadOnly(true);
QVBoxLayout *layout = new QVBoxLayout;
layout->addWidget(new QLabel("<H1>S e r v e r</H1>"));
layout->addWidget(_text);
setLayout(layout);

}

void Server::slotNewConnection()
{
    _socket = _server->nextPendingConnection();
    _socket->write("Hello World");
}


