#ifndef MENU_BAR_MENUS_DBMS_XPLAN_MENU_ABSTRACT_DISPLAY_MENU_ABSTRACT_DISPLAY_MENU_HH_
#define MENU_BAR_MENUS_DBMS_XPLAN_MENU_ABSTRACT_DISPLAY_MENU_ABSTRACT_DISPLAY_MENU_HH_

#include <QMenu>

namespace menu_bar {

class AbstractDisplayMenu : public QMenu {

 Q_OBJECT

 public:
  explicit AbstractDisplayMenu(QWidget *parent = 0);

 signals:

 public slots:

};

}  // namespace menu_bar

#endif  // MENU_BAR_MENUS_DBMS_XPLAN_MENU_ABSTRACT_DISPLAY_MENU_ABSTRACT_DISPLAY_MENU_HH_
