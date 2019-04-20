#include <QCoreApplication>
#include <iostream>

using namespace std;

class Class
{
public:
    int _a;
    Class(int a)
    {
    _a=a;
    }
};

void function(Class *p1, Class p2)
{
    p1->_a++;
    p2._a++;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

Class *x = new Class(10);
cout<< x->_a << endl;

/*Class y(20);*/Class y = Class(20);
cout << y._a << endl;

function(x, y);
cout << x->_a << endl;
cout << y._a << endl;

function(x, y);
cout << x->_a << endl;
cout << y._a << endl;

    return a.exec();
}
