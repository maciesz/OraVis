#include "menu_bar/menus/tool_menu/tool_menu.hh"

#include "constants/string_view_constants.hh"

namespace menu_bar {

ToolMenu::ToolMenu(QWidget *parent)
    : QMenu(parent),
      autotrace_menu_(new AutotraceMenu(NULL, this)),
      //dbms_stats_menu_(new Dbm(this)),
      dbms_xplan_menu_(new DbmsXplanMenu(this)) {
  setTitle(view_constants::TOOLS_MENU_TITLE);
  addMenu(autotrace_menu_);
  addMenu(dbms_xplan_menu_);
}

}  // namespace menu_bar
