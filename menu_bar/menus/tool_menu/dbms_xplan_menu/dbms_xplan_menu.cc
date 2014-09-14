#include "menu_bar/menus/tool_menu/dbms_xplan_menu/dbms_xplan_menu.hh"

#include "constants/string_view_constants.hh"

namespace menu_bar {

DbmsXplanMenu::DbmsXplanMenu(QWidget *parent)
    : QMenu(parent),
      display_filter_(new QAction("Choose display filter", this)),
      view_last_plan_(new QAction("View last plan", this)),
      widget_(new DbmsXplanSettingsWidget()) {
  setTitle(view_constants::DBMS_XPLAN_MENU_TITLE);
  SetConnects();
  AddActions();
}

void DbmsXplanMenu::AddActions() {
  addAction(display_filter_);
  addSeparator();
  addAction(view_last_plan_);
  //addAction(display_awr_action_);
  //addSeparator();
  //addAction(display_cursor_action_);
  //addSeparator();
  //addAction(display_sql_set_action_);
}

void DbmsXplanMenu::SetConnects() {
  connect(display_filter_,
          SIGNAL(triggered()),
          widget_,
          SLOT(show()));
}
}  // namespace menu_bar
