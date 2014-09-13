#ifndef MENU_BAR_MENU_BAR_MANAGER_HH_
#define MENU_BAR_MENU_BAR_MANAGER_HH_

#include <QMenu>
#include <QMenuBar>

#include "menu_bar/menus/tool_menu/tool_menu.hh"

namespace menu_bar {

class MenuBarManager : public QMenuBar {

 Q_OBJECT

 public:
  explicit MenuBarManager(QWidget *parent = 0);

 signals:

 public slots:

 private:
  void DrawMenuBarManager();

  void DrawToolMenu();

  ToolMenu* tool_menu_;
};

}  // namespace menu_bar

#endif  // MENU_BAR_MENU_BAR_MANAGER_HH_
