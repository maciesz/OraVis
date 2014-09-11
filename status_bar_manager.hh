#ifndef STATUS_BAR_MANAGER_HH
#define STATUS_BAR_MANAGER_HH

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

#endif  // STATUS_BAR_MANAGER_HH
