/****************************************************************************
** Meta object code from reading C++ file 'employeeinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../26_10_Select_from_ComboBox_show_to_LineEdit/employeeinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'employeeinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EmployeeInfo_t {
    QByteArrayData data[8];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EmployeeInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EmployeeInfo_t qt_meta_stringdata_EmployeeInfo = {
    {
QT_MOC_LITERAL(0, 0, 12), // "EmployeeInfo"
QT_MOC_LITERAL(1, 13, 26), // "on_pushButton_Save_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 28), // "on_pushButton_Update_clicked"
QT_MOC_LITERAL(4, 70, 28), // "on_pushButton_Delete_clicked"
QT_MOC_LITERAL(5, 99, 26), // "on_pushButton_Load_clicked"
QT_MOC_LITERAL(6, 126, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(7, 158, 4) // "arg1"

    },
    "EmployeeInfo\0on_pushButton_Save_clicked\0"
    "\0on_pushButton_Update_clicked\0"
    "on_pushButton_Delete_clicked\0"
    "on_pushButton_Load_clicked\0"
    "on_comboBox_currentIndexChanged\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EmployeeInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void EmployeeInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EmployeeInfo *_t = static_cast<EmployeeInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_Save_clicked(); break;
        case 1: _t->on_pushButton_Update_clicked(); break;
        case 2: _t->on_pushButton_Delete_clicked(); break;
        case 3: _t->on_pushButton_Load_clicked(); break;
        case 4: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject EmployeeInfo::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EmployeeInfo.data,
      qt_meta_data_EmployeeInfo,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EmployeeInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EmployeeInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EmployeeInfo.stringdata0))
        return static_cast<void*>(const_cast< EmployeeInfo*>(this));
    return QDialog::qt_metacast(_clname);
}

int EmployeeInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
