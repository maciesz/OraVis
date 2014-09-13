#ifndef STATUS_BAR_STATUS_BAR_MANAGER_HH_
#define STATUS_BAR_STATUS_BAR_MANAGER_HH_

#include <QStatusBar>

namespace status_bar  {

class StatusBarManager : public QStatusBar {

 Q_OBJECT

 public:
  explicit StatusBarManager(QWidget *parent = 0);

 signals:

 public slots:

}   ;

}  // namespace status_bar

#endif  // STATUS_BAR_STATUS_BAR_MANAGER_HH_
