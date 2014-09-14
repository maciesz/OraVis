#ifndef MENU_BAR_MENUS_TOOL_MENU_HH_
#define MENU_BAR_MENUS_TOOL_MENU_HH_

#include <QMenu>

#include "autotrace_menu/autotrace_menu.hh"
#include "dbms_xplan_menu/dbms_xplan_menu.hh"

namespace menu_bar {

class ToolMenu : public QMenu {

 Q_OBJECT

 public:
  explicit ToolMenu(QWidget *parent = 0);

 signals:

 public slots:

 private:

  AutotraceMenu* autotrace_menu_;
  // DbmsStatsMenu* dbms_stats_menu_;
  DbmsXplanMenu* dbms_xplan_menu_;
  // TODO: QMenu* TkprofMenu;
};

}  // namespace menu_bar

#endif  // MENU_BAR_MENUS_TOOL_MENU_HH_
