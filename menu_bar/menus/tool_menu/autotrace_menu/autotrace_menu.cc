#include "menu_bar/menus/tool_menu/autotrace_menu/autotrace_menu.hh"

#include "constants/string_view_constants.hh"

namespace menu_bar {

AutotraceMenu::AutotraceMenu(AutotraceExecutor* executor, QWidget* parent)
    : QMenu(parent),
      executor_(executor),
      off_(new QAction(this)),
      on_(new QAction(this)),
      on_explain_(new QAction(this)),
      on_statistics_(new QAction(this)),
      traceonly_(new QAction(this)),
      on_traceonly_explain_(new QAction(this)),
      on_traceonly_statistics_(new QAction(this)) {
  setTitle(view_constants::AUTOTRACE_MENU_TITLE);
  SetActionTitles();
  SetConnects();
  AddActions();
}

void AutotraceMenu::SetActionTitles() {
  off_->setText(view_constants::SET_AUTOTRACE_OFF_ACTION_TITLE);
  on_->setText(view_constants::SET_AUTOTRACE_ON_ACTION_TITLE);
  on_explain_->setText(view_constants::SET_AUTOTRACE_ON_EXPLAIN_ACTION_TITLE);
  on_statistics_->setText(
      view_constants::SET_AUTOTRACE_ON_STATISTICS_ACTION_TITLE);
  traceonly_->setText(view_constants::SET_AUTOTRACE_TRACEONLY_ACTION_TITLE);
  on_traceonly_explain_->setText(
      view_constants::SET_AUTOTRACE_ON_TRACEONLY_EXPLAIN_ACTION_TITLE);
  on_traceonly_statistics_->setText(
      view_constants::SET_AUTOTRACE_ON_TRACEONLY_STATS_ACTION_TITLE);
}

void AutotraceMenu::SetConnects() const {
  connect(off_,
          SIGNAL(triggered()),
          executor_,
          SLOT(OnSetAutotraceOff()));
  connect(on_,
          SIGNAL(triggered()),
          executor_,
          SLOT(OnSetAutotraceOn()));
  connect(on_explain_,
          SIGNAL(triggered()),
          executor_,
          SLOT(OnSetAutotraceOnExplain()));
  connect(on_statistics_,
          SIGNAL(triggered()),
          executor_,
          SLOT(OnSetAutotraceOnStatistics()));
  connect(traceonly_,
          SIGNAL(triggered()),
          executor_,
          SLOT(OnSetAutotraceTraceonly()));
  connect(on_traceonly_explain_,
          SIGNAL(triggered()),
          executor_,
          SLOT(OnSetAutotraceOnTraceonlyExplain()));
  connect(on_traceonly_statistics_,
          SIGNAL(triggered()),
          executor_,
          SLOT(OnSetAutotraceOnTraceonlyStatistics()));
}

void AutotraceMenu::AddActions() {
  addAction(on_);
  addAction(on_explain_);
  addAction(on_statistics_);

  addSeparator();

  addAction(traceonly_);
  addAction(on_traceonly_explain_);
  addAction(on_traceonly_statistics_);

  addSeparator();

  addAction(off_);
}

}  // namespace menu_bar
