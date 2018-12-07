/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      38,   11,   11,   11, 0x08,
      58,   11,   11,   11, 0x08,
      78,   11,   11,   11, 0x08,
      98,   11,   11,   11, 0x08,
     118,   11,   11,   11, 0x08,
     138,   11,   11,   11, 0x08,
     158,   11,   11,   11, 0x08,
     178,   11,   11,   11, 0x08,
     198,   11,   11,   11, 0x08,
     218,   11,   11,   11, 0x08,
     239,   11,   11,   11, 0x08,
     260,   11,   11,   11, 0x08,
     281,   11,   11,   11, 0x08,
     302,   11,   11,   11, 0x08,
     323,   11,   11,   11, 0x08,
     344,   11,   11,   11, 0x08,
     365,   11,   11,   11, 0x08,
     386,   11,   11,   11, 0x08,
     407,   11,   11,   11, 0x08,
     428,   11,   11,   11, 0x08,
     449,   11,   11,   11, 0x08,
     473,   11,   11,   11, 0x08,
     511,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_pushButton_3_clicked()\0"
    "on_Botao1_clicked()\0on_Botao2_clicked()\0"
    "on_Botao3_clicked()\0on_Botao4_clicked()\0"
    "on_Botao5_clicked()\0on_Botao6_clicked()\0"
    "on_Botao7_clicked()\0on_Botao8_clicked()\0"
    "on_Botao9_clicked()\0on_Botao10_clicked()\0"
    "on_Botao11_clicked()\0on_Botao12_clicked()\0"
    "on_Botao13_clicked()\0on_Botao14_clicked()\0"
    "on_Botao15_clicked()\0on_Botao16_clicked()\0"
    "on_Botao17_clicked()\0on_Botao18_clicked()\0"
    "on_Botao19_clicked()\0on_Botao20_clicked()\0"
    "on_BotaoFinal_clicked()\0"
    "on_verticalScrollBar_sliderReleased()\0"
    "on_pushButton_clicked()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_3_clicked(); break;
        case 1: _t->on_Botao1_clicked(); break;
        case 2: _t->on_Botao2_clicked(); break;
        case 3: _t->on_Botao3_clicked(); break;
        case 4: _t->on_Botao4_clicked(); break;
        case 5: _t->on_Botao5_clicked(); break;
        case 6: _t->on_Botao6_clicked(); break;
        case 7: _t->on_Botao7_clicked(); break;
        case 8: _t->on_Botao8_clicked(); break;
        case 9: _t->on_Botao9_clicked(); break;
        case 10: _t->on_Botao10_clicked(); break;
        case 11: _t->on_Botao11_clicked(); break;
        case 12: _t->on_Botao12_clicked(); break;
        case 13: _t->on_Botao13_clicked(); break;
        case 14: _t->on_Botao14_clicked(); break;
        case 15: _t->on_Botao15_clicked(); break;
        case 16: _t->on_Botao16_clicked(); break;
        case 17: _t->on_Botao17_clicked(); break;
        case 18: _t->on_Botao18_clicked(); break;
        case 19: _t->on_Botao19_clicked(); break;
        case 20: _t->on_Botao20_clicked(); break;
        case 21: _t->on_BotaoFinal_clicked(); break;
        case 22: _t->on_verticalScrollBar_sliderReleased(); break;
        case 23: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
