#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //QRegExp reg("a*.[0-9]{1,3}\\.[0-9]{1,3}\\.[0-9]{1,3}\\.[0-9]{1,3}");
    QRegExp reg ("aa*");
    QString str ("");
    //QString str("this is an ip-address 123.222.63.1 lets check it");
    qDebug() << (str.contains(reg) > 0); // true
    return a.exec();
}


