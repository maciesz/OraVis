#ifndef TOOL_BAR_MANAGER_HH
#define TOOL_BAR_MANAGER_HH

#include <QToolBar>

namespace tool_bar {

class ToolBarManager : public QToolBar {

 Q_OBJECT

 public:
  explicit ToolBarManager(QWidget *parent = 0);

 signals:

 public slots:

};

}  // namespace tool_bar

#endif  // TOOL_BAR_MANAGER_HH
