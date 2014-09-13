#ifndef MENU_BAR_MENUS_TOOL_MENU_DBMS_XPLAN_MENU_ABSTRACT_DISPLAY_ACTION_HH_
#define MENU_BAR_MENUS_TOOL_MENU_DBMS_XPLAN_MENU_ABSTRACT_DISPLAY_ACTION_HH_

#include <QMenu>

namespace menu_bar {

class AbstractDisplayAction : public QAction {

 Q_OBJECT

 public:
  explicit AbstractDisplayAction(QWidget *parent = 0);

 signals:

 public slots:

};

}  // namespace menu_bar

#endif  // MENU_BAR_MENUS_TOOL_MENU_DBMS_XPLAN_MENU_ABSTRACT_DISPLAY_ACTION_HH_
