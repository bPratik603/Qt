/****************************************************************************
** Meta object code from reading C++ file 'finddialogue.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../finddialogue.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'finddialogue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSFindDialogueENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSFindDialogueENDCLASS = QtMocHelpers::stringData(
    "FindDialogue",
    "findNext",
    "",
    "str",
    "Qt::CaseSensitivity",
    "cs",
    "findPrevious",
    "findClicked",
    "enableFindButton",
    "text"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFindDialogueENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[13];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[20];
    char stringdata5[3];
    char stringdata6[13];
    char stringdata7[12];
    char stringdata8[17];
    char stringdata9[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFindDialogueENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFindDialogueENDCLASS_t qt_meta_stringdata_CLASSFindDialogueENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "FindDialogue"
        QT_MOC_LITERAL(13, 8),  // "findNext"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 3),  // "str"
        QT_MOC_LITERAL(27, 19),  // "Qt::CaseSensitivity"
        QT_MOC_LITERAL(47, 2),  // "cs"
        QT_MOC_LITERAL(50, 12),  // "findPrevious"
        QT_MOC_LITERAL(63, 11),  // "findClicked"
        QT_MOC_LITERAL(75, 16),  // "enableFindButton"
        QT_MOC_LITERAL(92, 4)   // "text"
    },
    "FindDialogue",
    "findNext",
    "",
    "str",
    "Qt::CaseSensitivity",
    "cs",
    "findPrevious",
    "findClicked",
    "enableFindButton",
    "text"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFindDialogueENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   38,    2, 0x06,    1 /* Public */,
       6,    2,   43,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   48,    2, 0x08,    7 /* Private */,
       8,    1,   49,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject FindDialogue::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSFindDialogueENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFindDialogueENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFindDialogueENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FindDialogue, std::true_type>,
        // method 'findNext'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::CaseSensitivity, std::false_type>,
        // method 'findPrevious'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::CaseSensitivity, std::false_type>,
        // method 'findClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'enableFindButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void FindDialogue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FindDialogue *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->findNext((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::CaseSensitivity>>(_a[2]))); break;
        case 1: _t->findPrevious((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::CaseSensitivity>>(_a[2]))); break;
        case 2: _t->findClicked(); break;
        case 3: _t->enableFindButton((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FindDialogue::*)(const QString & , Qt::CaseSensitivity );
            if (_t _q_method = &FindDialogue::findNext; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FindDialogue::*)(const QString & , Qt::CaseSensitivity );
            if (_t _q_method = &FindDialogue::findPrevious; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *FindDialogue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FindDialogue::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFindDialogueENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FindDialogue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void FindDialogue::findNext(const QString & _t1, Qt::CaseSensitivity _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FindDialogue::findPrevious(const QString & _t1, Qt::CaseSensitivity _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
