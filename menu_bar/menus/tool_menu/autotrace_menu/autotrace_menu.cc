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
  SetActionTitles();
  SetConnects();
  AddActions();

  setTitle("Autotrace..");
}

void AutotraceMenu::SetActionTitles() {
  off_->setText(view_constants::SET_AUTOTRACE_OFF_);
  on_->setText(view_constants::SET_AUTOTRACE_ON);
  on_explain_->setText(view_constants::SET_AUTOTRACE_ON_EXPLAIN);
  on_statistics_->setText(view_constants::SET_AUTOTRACE_ON_STATISTICS);
  traceonly_->setText(view_constants::SET_AUTOTRACE_TRACEONLY);
  on_traceonly_explain_->setText(
      view_constants::SET_AUTOTRACE_ON_TRACEONLY_EXPLAIN);
  on_traceonly_statistics_->setText(
      view_constants::SET_AUTOTRACE_ON_TRACEONLY_STATS);
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
  addAction(off_);

  addSeparator();

  addAction(on_);
  addAction(on_explain_);
  addAction(on_statistics_);

  addSeparator();

  addAction(traceonly_);
  addAction(on_traceonly_explain_);
  addAction(on_traceonly_statistics_);
}

}  // namespace menu_bar
