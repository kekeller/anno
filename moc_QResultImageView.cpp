/****************************************************************************
** Meta object code from reading C++ file 'QResultImageView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QResultImageView/QResultImageView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QResultImageView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QResultImageView_t {
    QByteArrayData data[18];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QResultImageView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QResultImageView_t qt_meta_stringdata_QResultImageView = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QResultImageView"
QT_MOC_LITERAL(1, 17, 6), // "panned"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 6), // "zoomed"
QT_MOC_LITERAL(4, 32, 13), // "mouseOnResult"
QT_MOC_LITERAL(5, 46, 6), // "size_t"
QT_MOC_LITERAL(6, 53, 11), // "resultIndex"
QT_MOC_LITERAL(7, 65, 16), // "mouseNotOnResult"
QT_MOC_LITERAL(8, 82, 18), // "mouseAtCoordinates"
QT_MOC_LITERAL(9, 101, 11), // "sourcePoint"
QT_MOC_LITERAL(10, 113, 10), // "pixelIndex"
QT_MOC_LITERAL(11, 124, 9), // "mouseLeft"
QT_MOC_LITERAL(12, 134, 12), // "maskUpdating"
QT_MOC_LITERAL(13, 147, 11), // "maskUpdated"
QT_MOC_LITERAL(14, 159, 16), // "newMarkingRadius"
QT_MOC_LITERAL(15, 176, 18), // "annotationsVisible"
QT_MOC_LITERAL(16, 195, 7), // "visible"
QT_MOC_LITERAL(17, 203, 27) // "performSmoothTransformation"

    },
    "QResultImageView\0panned\0\0zoomed\0"
    "mouseOnResult\0size_t\0resultIndex\0"
    "mouseNotOnResult\0mouseAtCoordinates\0"
    "sourcePoint\0pixelIndex\0mouseLeft\0"
    "maskUpdating\0maskUpdated\0newMarkingRadius\0"
    "annotationsVisible\0visible\0"
    "performSmoothTransformation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QResultImageView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    1,   71,    2, 0x06 /* Public */,
       7,    0,   74,    2, 0x06 /* Public */,
       8,    2,   75,    2, 0x06 /* Public */,
      11,    0,   80,    2, 0x06 /* Public */,
      12,    0,   81,    2, 0x06 /* Public */,
      13,    0,   82,    2, 0x06 /* Public */,
      14,    1,   83,    2, 0x06 /* Public */,
      15,    1,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF, QMetaType::Int,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Bool,   16,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QResultImageView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QResultImageView *_t = static_cast<QResultImageView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->panned(); break;
        case 1: _t->zoomed(); break;
        case 2: _t->mouseOnResult((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        case 3: _t->mouseNotOnResult(); break;
        case 4: _t->mouseAtCoordinates((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->mouseLeft(); break;
        case 6: _t->maskUpdating(); break;
        case 7: _t->maskUpdated(); break;
        case 8: _t->newMarkingRadius((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->annotationsVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->performSmoothTransformation(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QResultImageView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QResultImageView::panned)) {
                *result = 0;
            }
        }
        {
            typedef void (QResultImageView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QResultImageView::zoomed)) {
                *result = 1;
            }
        }
        {
            typedef void (QResultImageView::*_t)(size_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QResultImageView::mouseOnResult)) {
                *result = 2;
            }
        }
        {
            typedef void (QResultImageView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QResultImageView::mouseNotOnResult)) {
                *result = 3;
            }
        }
        {
            typedef void (QResultImageView::*_t)(QPointF , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QResultImageView::mouseAtCoordinates)) {
                *result = 4;
            }
        }
        {
            typedef void (QResultImageView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QResultImageView::mouseLeft)) {
                *result = 5;
            }
        }
        {
            typedef void (QResultImageView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QResultImageView::maskUpdating)) {
                *result = 6;
            }
        }
        {
            typedef void (QResultImageView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QResultImageView::maskUpdated)) {
                *result = 7;
            }
        }
        {
            typedef void (QResultImageView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QResultImageView::newMarkingRadius)) {
                *result = 8;
            }
        }
        {
            typedef void (QResultImageView::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QResultImageView::annotationsVisible)) {
                *result = 9;
            }
        }
    }
}

const QMetaObject QResultImageView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QResultImageView.data,
      qt_meta_data_QResultImageView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QResultImageView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QResultImageView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QResultImageView.stringdata0))
        return static_cast<void*>(const_cast< QResultImageView*>(this));
    return QWidget::qt_metacast(_clname);
}

int QResultImageView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QResultImageView::panned()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QResultImageView::zoomed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QResultImageView::mouseOnResult(size_t _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QResultImageView::mouseNotOnResult()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QResultImageView::mouseAtCoordinates(QPointF _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QResultImageView::mouseLeft()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void QResultImageView::maskUpdating()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void QResultImageView::maskUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void QResultImageView::newMarkingRadius(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QResultImageView::annotationsVisible(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
