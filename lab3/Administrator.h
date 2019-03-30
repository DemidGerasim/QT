#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <QObject>

class Administrator : public QObject
{
     Q_OBJECT
private:
    QString qstr = "QQQ";

public:
    //explicit Administrator(QObject *parent = nullptr);
    Administrator(){}

signals:

public slots:
};

#endif // ADMINISTRATOR_H
