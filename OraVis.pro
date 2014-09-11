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
    main.cc \
    autotrace_controller.cc \
    layout_manager.cc \
    board_preview_layout.cc \
    editor_layout.cc \
    visualization_panel_layout.cc \
    main_window.cc \
    input_layout.cc \
    output_layout.cc \
    status_bar_manager.cc \
    menu_bar_manager.cc \
    tool_bar_manager.cc

HEADERS  += \
    autotrace_controller.hh \
    base_format_set.hh \
    extended_format_set.hh \
    layout_manager.hh \
    board_preview_layout.hh \
    editor_layout.hh \
    visualization_panel_layout.hh \
    main_window.hh \
    input_layout.hh \
    output_layout.hh \
    status_bar_manager.hh \
    menu_bar_manager.hh \
    tool_bar_manager.hh
