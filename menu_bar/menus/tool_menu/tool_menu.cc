#include "menu_bar/menus/tool_menu/tool_menu.hh"

#include "constants/string_view_constants.hh"

namespace menu_bar {

ToolMenu::ToolMenu(QWidget *parent)
    : QMenu(parent),
      autotrace_menu_(new QMenu(this)),
      dbms_stats_menu_(new QMenu(this)),
      dbms_xplan_menu_(new QMenu(this)) {
  InitializeToolMenu();
}

void ToolMenu::InitializeToolMenu() {
  this->setTitle("Tools");

  InitAutotraceMenu();
  addSeparator();
  InitDbmsStatsMenu();
  InitDbmsXplanMenu();
  addSeparator();
  //InitTkprofMenu();
}

void ToolMenu::InitAutotraceMenu() {
  autotrace_menu_->setTitle("Set Autotrace working mode..");

  autotrace_menu_->addAction(view_constants::SET_AUTOTRACE_OFF_);
  autotrace_menu_->addSeparator();
  autotrace_menu_->addAction(view_constants::SET_AUTOTRACE_ON);
  autotrace_menu_->addAction(view_constants::SET_AUTOTRACE_ON_EXPLAIN);
  autotrace_menu_->addAction(view_constants::SET_AUTOTRACE_ON_STATISTICS);
  autotrace_menu_->addSeparator();
  autotrace_menu_->addAction(view_constants::SET_AUTOTRACE_TRACEONLY);
  autotrace_menu_->addAction(
      view_constants::SET_AUTOTRACE_ON_TRACEONLY_EXPLAIN);
  autotrace_menu_->addAction(view_constants::SET_AUTOTRACE_ON_TRACEONLY_STATS);

  this->addMenu(autotrace_menu_);
}

void ToolMenu::InitDbmsStatsMenu() {

}

void ToolMenu::InitDbmsXplanMenu() {
  dbms_xplan_menu_->setTitle("DBMS XPLAN Settings");

  this->addMenu(dbms_xplan_menu_);
}

}  // namespace menu_bar
