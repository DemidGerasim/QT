#include "server.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Server _server(8080);
    _server.show();

    return a.exec();
}
