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

void function1(Class *p1, Class p2)
{
    p1->_a++;
    p2._a++;
}

void function2(Class &p1, Class p2)
{
    p1._a++;
    p2._a++;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

/*Class *x = new Class(10);
cout<< x->_a << endl;

//Class y(20);
Class y = Class(20);
cout << y._a << endl;

function1(x, y);
cout << x->_a << endl;
cout << y._a << endl;

function1(x, y);
cout << x->_a << endl;
cout << y._a << endl;
*/

Class x = Class(10);
cout<< x._a << endl;

//Class y(20);
Class y = Class(20);
cout << y._a << endl;

function2(x, y);
cout << x._a << endl;
cout << y._a << endl;

function2(x, y);
cout << x._a << endl;
cout << y._a << endl;

    return a.exec();
}
