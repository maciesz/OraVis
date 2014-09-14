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
    # Autotrace
    autotrace_executor.cc \
    # MainWindow layouts
    layouts/board_preview_layout/board_preview_layout.cc \
    layouts/editor_layout/editor_layout.cc \
    layouts/input_layout/input_layout.cc \
    layouts/layout_manager/layout_manager.cc \
    layouts/output_layout/output_layout.cc \
    layouts/visualization_panel_layout/visualization_panel_layout.cc \
    main_window/main_window.cc \
    # MenuBar
    menu_bar/menus/tool_menu/autotrace_menu/autotrace_menu.cc \
    menu_bar/menus/tool_menu/dbms_xplan_menu/dbms_xplan_menu.cc \
    menu_bar/menus/tool_menu/tool_menu.cc \
    menu_bar/menu_bar_manager/menu_bar_manager.cc \
    # ToolBar
    tool_bar/tool_bar_manager/tool_bar_manager.cc \
    # StatusBar
    status_bar/status_bar_manager/status_bar_manager.cc \
    # Widgets
    #
    # / DBMS_XPLAN Settings Widget
    widgets/dbms_xplan_settings_widget/dbms_xplan_settings_widget.cc \
    # // CheckboxManagers
    widgets/dbms_xplan_settings_widget/checkbox_managers/abstract_display_checkbox_manager/abstract_display_checkbox_manager.cc \
    widgets/dbms_xplan_settings_widget/checkbox_managers/default_display_checkbox_manager/default_display_checkbox_manager.cc \
    widgets/dbms_xplan_settings_widget/checkbox_managers/display_awr_checkbox_manager/display_awr_checkbox_manager.cc \
    widgets/dbms_xplan_settings_widget/checkbox_managers/display_cursor_checkbox_manager/display_cursor_checkbox_manager.cc \
    widgets/dbms_xplan_settings_widget/checkbox_managers/display_sqlset_checkbox_manager/display_sqlset_checkbox_manager.cc \
    # // Layouts
    widgets/dbms_xplan_settings_widget/layouts/standard_keyword_layout_manager/standard_keyword_layout_manager.cc \
    widgets/dbms_xplan_settings_widget/layouts/abstract_keyword_layout_manager/abstract_keyword_layout_manager.cc \
    widgets/dbms_xplan_settings_widget/layouts/extended_keyword_layout_manager/extended_keyword_layout_manager.cc


HEADERS  += \
    # Constants
    constants/string_logic_constants.hh \
    constants/string_view_constants.hh \
    # Autotrace
    autotrace_executor.hh \
    # MainWindow layouts
    layouts/board_preview_layout/board_preview_layout.hh \
    layouts/editor_layout/editor_layout.hh \
    layouts/input_layout/input_layout.hh \
    layouts/layout_manager/layout_manager.hh \
    layouts/output_layout/output_layout.hh \
    layouts/visualization_panel_layout/visualization_panel_layout.hh \
    main_window/main_window.hh \
    # MenuBar
    menu_bar/menus/tool_menu/autotrace_menu/autotrace_menu.hh \
    menu_bar/menus/tool_menu/dbms_xplan_menu/dbms_xplan_menu.hh \
    menu_bar/menus/tool_menu/tool_menu.hh \
    menu_bar/menu_bar_manager/menu_bar_manager.hh \
    # ToolBar
    tool_bar/tool_bar_manager/tool_bar_manager.hh \
    # StatusBar
    status_bar/status_bar_manager/status_bar_manager.hh \
    # Widgets
    #
    # / DBMS_XPLAN Settings Widget
    widgets/dbms_xplan_settings_widget/dbms_xplan_settings_widget.hh \
    # // CheckboxManagers
    widgets/dbms_xplan_settings_widget/checkbox_managers/abstract_display_checkbox_manager/abstract_display_checkbox_manager.hh \
    widgets/dbms_xplan_settings_widget/checkbox_managers/default_display_checkbox_manager/default_display_checkbox_manager.hh \
    widgets/dbms_xplan_settings_widget/checkbox_managers/display_awr_checkbox_manager/display_awr_checkbox_manager.hh \
    widgets/dbms_xplan_settings_widget/checkbox_managers/display_cursor_checkbox_manager/display_cursor_checkbox_manager.hh \
    widgets/dbms_xplan_settings_widget/checkbox_managers/display_sqlset_checkbox_manager/display_sqlset_checkbox_manager.hh \
    # // Layouts
    widgets/dbms_xplan_settings_widget/layouts/standard_keyword_layout_manager/standard_keyword_layout_manager.hh \
    widgets/dbms_xplan_settings_widget/layouts/abstract_keyword_layout_manager/abstract_keyword_layout_manager.hh \
    widgets/dbms_xplan_settings_widget/layouts/extended_keyword_layout_manager/extended_keyword_layout_manager.hh

