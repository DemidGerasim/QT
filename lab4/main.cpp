#include "server.h"
#include "client.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Server _server(8080);
    _server.show();
  //  Client _client(127.0.0.1, 8080);
    return a.exec();
}
