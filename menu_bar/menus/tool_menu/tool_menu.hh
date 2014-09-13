#ifndef MENU_BAR_MENUS_TOOL_MENU_HH_
#define MENU_BAR_MENUS_TOOL_MENU_HH_

#include <QMenu>

namespace menu_bar {

class ToolMenu : public QMenu {

 Q_OBJECT

 public:
  explicit ToolMenu(QWidget *parent = 0);

 signals:

 public slots:

 private:
  void InitializeToolMenu();

  void InitAutotraceMenu();

  void InitDbmsStatsMenu();

  void InitDbmsXplanMenu();

  //void InitTkprofMenu();

  QMenu* autotrace_menu_;
  QMenu* dbms_stats_menu_;
  QMenu* dbms_xplan_menu_;
  // TODO: QMenu* TkprofMenu;
};

}  // namespace menu_bar

#endif  // MENU_BAR_MENUS_TOOL_MENU_HH_
