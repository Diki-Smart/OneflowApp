/****************************************************************************
** Meta object code from reading C++ file 'dico.h'
**
** Created: Sun 16. Nov 00:41:59 2014
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dico.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dico.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dico[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x0a,
      21,    5,    5,    5, 0x0a,
      31,    5,    5,    5, 0x0a,
      40,    5,    5,    5, 0x0a,
      47,    5,    5,    5, 0x0a,
      55,    5,    5,    5, 0x0a,
      64,    5,    5,    5, 0x0a,
      75,    5,    5,    5, 0x0a,
      88,    5,    5,    5, 0x0a,
      97,    5,    5,    5, 0x0a,
     106,    5,    5,    5, 0x0a,
     116,    5,    5,    5, 0x0a,
     128,    5,    5,    5, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_dico[] = {
    "dico\0\0ouvrirapropo()\0accueil()\0retour()\0"
    "bleu()\0rouge()\0defaut()\0bleuciel()\0"
    "on_windows()\0on_mac()\0son_on()\0son_off()\0"
    "recherche()\0on_item(QListWidgetItem*)\0"
};

const QMetaObject dico::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_dico,
      qt_meta_data_dico, 0 }
};

const QMetaObject *dico::metaObject() const
{
    return &staticMetaObject;
}

void *dico::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dico))
        return static_cast<void*>(const_cast< dico*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int dico::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ouvrirapropo(); break;
        case 1: accueil(); break;
        case 2: retour(); break;
        case 3: bleu(); break;
        case 4: rouge(); break;
        case 5: defaut(); break;
        case 6: bleuciel(); break;
        case 7: on_windows(); break;
        case 8: on_mac(); break;
        case 9: son_on(); break;
        case 10: son_off(); break;
        case 11: recherche(); break;
        case 12: on_item((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
