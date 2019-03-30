#ifndef VIEWER_H
#define VIEWER_H

#include <QObject>
#include <QWidget>
#include "Administrator.h"
#include <QTextEdit>
#include <QVBoxLayout>
class Viewer : public QWidget
{
    Q_OBJECT
private:
    Administrator *_adm;
    QTextEdit *_text;

public:
    //explicit Viewer(QWidget *parent = nullptr);
    Viewer(Administrator *adm){
        _adm = adm;
        _text = new QTextEdit();
        QVBoxLayout *layout = new QVBoxLayout();
        setLayout(layout);
        layout -> addWidget(_text);
    }

    void setText(QString a)
    {
        _text->setText(a);
    }

signals:

public slots:
};

#endif // VIEWER_H
