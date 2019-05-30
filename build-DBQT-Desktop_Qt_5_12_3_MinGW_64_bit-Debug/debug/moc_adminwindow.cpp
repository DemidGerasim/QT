/****************************************************************************
** Meta object code from reading C++ file 'adminwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DBQT/adminwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdminWindow_t {
    QByteArrayData data[10];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdminWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdminWindow_t qt_meta_stringdata_AdminWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AdminWindow"
QT_MOC_LITERAL(1, 12, 18), // "on_AddUser_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 14), // "on_Add_clicked"
QT_MOC_LITERAL(4, 47, 22), // "on_SearchUsers_clicked"
QT_MOC_LITERAL(5, 70, 24), // "on_TableProgress_clicked"
QT_MOC_LITERAL(6, 95, 17), // "on_Delete_clicked"
QT_MOC_LITERAL(7, 113, 21), // "on_DeleteProg_clicked"
QT_MOC_LITERAL(8, 135, 17), // "on_Change_clicked"
QT_MOC_LITERAL(9, 153, 19) // "on_Change_2_clicked"

    },
    "AdminWindow\0on_AddUser_clicked\0\0"
    "on_Add_clicked\0on_SearchUsers_clicked\0"
    "on_TableProgress_clicked\0on_Delete_clicked\0"
    "on_DeleteProg_clicked\0on_Change_clicked\0"
    "on_Change_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AdminWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdminWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_AddUser_clicked(); break;
        case 1: _t->on_Add_clicked(); break;
        case 2: _t->on_SearchUsers_clicked(); break;
        case 3: _t->on_TableProgress_clicked(); break;
        case 4: _t->on_Delete_clicked(); break;
        case 5: _t->on_DeleteProg_clicked(); break;
        case 6: _t->on_Change_clicked(); break;
        case 7: _t->on_Change_2_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AdminWindow::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_AdminWindow.data,
    qt_meta_data_AdminWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AdminWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AdminWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
