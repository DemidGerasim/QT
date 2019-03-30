#include "Administrator.h"
#include "Viewer.h"
#include "Controller.h"
#include <QApplication>
#include <QVBoxLayout>
#include <QWidget>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

QWidget w;
QVBoxLayout *layout = new QVBoxLayout();
w.setLayout(layout);

Administrator *adm = new Administrator();//модель
Viewer *v = new Viewer(adm);//вьювер
Controller *c = new Controller(adm, v);//контроллер

layout -> addWidget(v);
layout -> addWidget(c);
w.show();
    return a.exec();
}
