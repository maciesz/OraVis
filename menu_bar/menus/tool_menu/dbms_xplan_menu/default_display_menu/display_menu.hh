#ifndef MENU_BAR_MENUS_TOOL_MENU_DBMS_XPLAN_MENU_DEFAULT_DISPLAY_MENU_HH_
#define MENU_BAR_MENUS_TOOL_MENU_DBMS_XPLAN_MENU_DEFAULT_DISPLAY_MENU_HH_

#include "menu_bar/menus/tool_menu/dbms_xplan_menu/abstract_display_menu/abstract_display_menu.hh"

namespace menu_bar {

class DisplayMenu : public AbstractDisplayMenu {

 Q_OBJECT
 public:
  explicit DisplayMenu(QWidget *parent = 0);

 signals:

 public slots:

};

}  // namespace menu_bar

#endif  // MENU_BAR_MENUS_TOOL_MENU_DBMS_XPLAN_MENU_DEFAULT_DISPLAY_MENU_HH_
