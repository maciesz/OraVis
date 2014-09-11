#ifndef MENU_BAR_MANAGER_HH
#define MENU_BAR_MANAGER_HH

#include <QMenuBar>

namespace menu_bar {

class MenuBarManager : public QMenuBar {

 Q_OBJECT

 public:
  explicit MenuBarManager(QWidget *parent = 0);

 signals:

 public slots:

};

}  // namespace menu_bar

#endif  // MENU_BAR_MANAGER_HH
