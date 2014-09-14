#ifndef MENU_BAR_MENUS_TOOL_MENU_DBMS_XPLAN_MENU_HH_
#define MENU_BAR_MENUS_TOOL_MENU_DBMS_XPLAN_MENU_HH_

#include <QMenu>

#include "default_display_action/display_action.hh"
#include "display_awr_action/display_awr_action.hh"
#include "display_cursor_action/display_cursor_action.hh"
#include "display_sql_set_action/display_sql_set_action.hh"

namespace menu_bar {

class DbmsXplanMenu : public QMenu {

 Q_OBJECT

 public:
  explicit DbmsXplanMenu(QWidget *parent = 0);

 signals:

 public slots:
 
 private:
  void AddActions();

  DisplayAction* display_action_;
  DisplayAWRAction* display_awr_action_;
  DisplayCursorAction* display_cursor_action_;
  DisplaySQLSetAction* display_sql_set_action_;
};

}  // namespace menu_bar

#endif // MENU_BAR_MENUS_TOOL_MENU_DBMS_XPLAN_MENU_HH_
