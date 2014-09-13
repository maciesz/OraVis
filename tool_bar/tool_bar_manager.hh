#ifndef TOOL_BAR_TOOL_BAR_MANAGER_HH_
#define TOOL_BAR_TOOL_BAR_MANAGER_HH_

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

#endif  // TOOL_BAR_TOOL_BAR_MANAGER_HH_
