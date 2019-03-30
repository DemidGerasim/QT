#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QWidget>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QPushButton>
#include "Administrator.h"
#include "Viewer.h"
class Controller : public QWidget
{
    Q_OBJECT
private:
    Administrator *_adm;
    Viewer *_v;
    QPushButton *_button;

public:
    //explicit Viewer(QWidget *parent = nullptr);
    Controller(Administrator *adm, Viewer *v){
        _adm = adm;
        _v = v;
        _button = new QPushButton("2000");
        QVBoxLayout *layout = new QVBoxLayout();
        setLayout(layout);
        layout -> addWidget(_button);
        connect(_button, SIGNAL(clicked()),this, SLOT(button2000()));
    }
signals:

public slots:
    void button2000()
    {
        emit _v->setText("AAA");//реализовать метод во вьювер
    }
};

#endif // CONTROLLER_H
