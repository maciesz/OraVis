#include "menu_bar/menus/tool_menu/dbms_xplan_menu/dbms_xplan_menu.hh"

#include "constants/string_view_constants.hh"

namespace menu_bar {

DbmsXplanMenu::DbmsXplanMenu(QWidget *parent)
    : QMenu(parent),
      display_action_(new DisplayAction(this)),
      display_awr_action_(new DisplayAWRAction(this)),
      display_cursor_action_(new DisplayCursorAction(this)),
      display_sql_set_action_(new DisplaySQLSetAction(this)) {
  setTitle(view_constants::DBMS_XPLAN_MENU_TITLE);
  AddActions();
}

void DbmsXplanMenu::AddActions() {
  addAction(display_action_);
  //addSeparator();
  addAction(display_awr_action_);
  //addSeparator();
  addAction(display_cursor_action_);
  //addSeparator();
  addAction(display_sql_set_action_);
}

}  // namespace menu_bar
