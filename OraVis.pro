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
    layouts/board_preview_layout/board_preview_layout.cc \
    layouts/editor_layout/editor_layout.cc \
    layouts/input_layout/input_layout.cc \
    layouts/layout_manager/layout_manager.cc \
    layouts/output_layout/output_layout.cc \
    layouts/visualization_panel_layout/visualization_panel_layout.cc \
    main_window/main_window.cc \
    menu_bar/menu_bar_manager/menu_bar_manager.cc \
    menu_bar/menus/tool_menu/dbms_xplan_menu/dbms_xplan_menu.cc \
    menu_bar/menus/tool_menu/dbms_xplan_menu/abstract_display_menu/abstract_display_menu.cc \
    menu_bar/menus/tool_menu/tool_menu.cc \
    status_bar/status_bar_manager/status_bar_manager.cc \
    tool_bar/tool_bar_manager/tool_bar_manager.cc \
    default_display_menu.cc \
    menu_bar/menus/tool_menu/dbms_xplan_menu/default_display_menu/display_menu.cc \
    menu_bar/menus/tool_menu/autotrace_menu/autotrace_menu.cc \
    autotrace_executor.cc

HEADERS  += \
    constants/string_logic_constants.hh \
    constants/string_view_constants.hh \
    layouts/board_preview_layout/board_preview_layout.hh \
    layouts/editor_layout/editor_layout.hh \
    layouts/input_layout/input_layout.hh \
    layouts/layout_manager/layout_manager.hh \
    layouts/output_layout/output_layout.hh \
    layouts/visualization_panel_layout/visualization_panel_layout.hh \
    main_window/main_window.hh \
    menu_bar/menu_bar_manager/menu_bar_manager.hh \
    menu_bar/menus/tool_menu/dbms_xplan_menu/dbms_xplan_menu.hh \
    menu_bar/menus/tool_menu/dbms_xplan_menu/abstract_display_menu/abstract_display_menu.hh \
    menu_bar/menus/tool_menu/tool_menu.hh \
    status_bar/status_bar_manager/status_bar_manager.hh \
    tool_bar/tool_bar_manager/tool_bar_manager.hh \
    default_display_menu.hh \
    menu_bar/menus/tool_menu/dbms_xplan_menu/default_display_menu/display_menu.hh \
    menu_bar/menus/tool_menu/autotrace_menu/autotrace_menu.hh \
    autotrace_executor.hh

