TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CXXFLAGS += -std=c++11 -Wall -Wfatal-errors

HEADERS += \
    headers/earth.h \
    headers/geometry.h \
    headers/logs.h \
    headers/position.h \
    headers/route.h \
    headers/track.h \
    headers/types.h \
    headers/xml/parser.h \
    headers/xml/element.h

SOURCES += \
    src/earth.cpp \
    src/gpx-tests.cpp \
    src/geometry.cpp \
    src/logs.cpp \
    src/position.cpp \
    src/route.cpp \
    src/track.cpp \
    src/xml/element.cpp \
    src/xml/parser.cpp \
    src/gpx-tests/name.cpp \
    src/gpx-tests/numpositions.cpp \
    src/gpx-tests/maxelevation-n0810103.cpp \
    src/gpx-tests/netLength-n0771231.cpp \
    src/gpx-tests/restingtime-n0804540.cpp

INCLUDEPATH += headers/  headers/xml/

TARGET = $$_PRO_FILE_PWD_/execs/gpx-tests

LIBS += -lboost_unit_test_framework

macx{
INCLUDEPATH += "/usr/local/Cellar/boost/1.71.0/include"
LIBS += -L"/usr/local/Cellar/boost/1.71.0/lib"
}
