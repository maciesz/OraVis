#-------------------------------------------------
#
# Project created by QtCreator 2014-09-07T23:13:16
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OraVis
TEMPLATE = app


SOURCES +=\
        mainwindow.cc \
    main.cc \
    autotrace_controller.cc

HEADERS  += mainwindow.hh \
    autotrace_controller.hh
