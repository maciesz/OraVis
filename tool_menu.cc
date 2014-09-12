#include "tool_menu.hh"

#include "string_view_constants.hh"

namespace menu_bar {

ToolMenu::ToolMenu(QWidget *parent)
    : QMenu(parent),
      autotrace_menu_(new QMenu(this)),
      dbms_stats_menu_(this),
      dbms_xplan_menu_(this) {
  InitializeToolMenu();
}

void ToolMenu::InitializeToolMenu() {
  autotrace_menu_->setTitle("Aadad");
  this->setTitle("Tools");

  this->addMenu(autotrace_menu_);
  QMenu* aa = this->addMenu(QString("AA"));
  InitAutotraceMenu();
  InitDbmsStatsMenu();
  InitDbmsXplanMenu();
  //InitTkprofMenu();
}

void ToolMenu::InitAutotraceMenu() {
  autotrace_menu_->setTitle("Autotrace..");
  //this->addMenu(autotrace_menu_);
//autotrace_menu_->setT
  autotrace_menu_->addAction(view_constants::SET_AUTOTRACE_OFF_);
  autotrace_menu_->addSeparator();
  autotrace_menu_->addAction(view_constants::SET_AUTOTRACE_ON);
  autotrace_menu_->addAction(view_constants::SET_AUTOTRACE_ON_EXPLAIN);
  autotrace_menu_->addMenu(view_constants::SET_AUTOTRACE_ON_STATISTICS);
  autotrace_menu_->addAction(view_constants::SET_AUTOTRACE_TRACEONLY);
  autotrace_menu_->addAction(view_constants::SET_AUTOTRACE_ON_TRACEONLY_EXPLAIN);
  autotrace_menu_->addAction(view_constants::SET_AUTOTRACE_ON_TRACEONLY_STATS);


}

void ToolMenu::InitDbmsStatsMenu() {

}

void ToolMenu::InitDbmsXplanMenu() {

}

}  // namespace menu_bar
