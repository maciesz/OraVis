#ifndef MENU_BAR_MENUS_TOOL_MENU_AUTOTRACE_MENU_HH_
#define MENU_BAR_MENUS_TOOL_MENU_AUTOTRACE_MENU_HH_

#include <QAction>
#include <QMenu>

#include "autotrace_executor.hh"

namespace menu_bar {

class AutotraceMenu : public QMenu {

 Q_OBJECT

 public:
  AutotraceMenu(AutotraceExecutor* executor, QWidget* parent = 0);

 signals:
  void AutotraceOff();
  void AutotraceOn();
  void AutotraceOnExplain();
  void AutotraceOnStatistics();
  void AutotraceTraceonly();
  void AutotraceOnTraceOnlyExplain();
  void AutotraceOnTraceOnlyStatistics();

 public slots:

 private:
  void SetActionTitles();

  void SetConnects() const;

  void AddActions();

  QAction* off_;
  QAction* on_;
  QAction* on_explain_;
  QAction* on_statistics_;
  QAction* traceonly_;
  QAction* on_traceonly_explain_;
  QAction* on_traceonly_statistics_;

  const AutotraceExecutor* executor_;
};

}  // namespace menu_bar

#endif  // MENU_BAR_MENUS_TOOL_MENU_AUTOTRACE_MENU_HH_
