#include "autotrace_executor.hh"

#include "constants/string_logic_constants.hh"

AutotraceExecutor::AutotraceExecutor(QObject *parent) :
    QObject(parent) {
}

//=============================================================================
// slots
//=============================================================================
void AutotraceExecutor::OnSetAutotraceOff() {
  autotrace_query_->exec(logic_constants::SET_AUTOTRACE_OFF_);
}

void AutotraceExecutor::OnSetAutotraceOnExplain() {
  autotrace_query_->exec(logic_constants::SET_AUTOTRACE_ON_EXPLAIN);
}

void AutotraceExecutor::OnSetAutotraceOnStatistics() {
  autotrace_query_->exec(logic_constants::SET_AUTOTRACE_ON_STATISTICS);
}

void AutotraceExecutor::OnSetAutotraceOn() {
  autotrace_query_->exec(logic_constants::SET_AUTOTRACE_ON);
}

void AutotraceExecutor::OnSetAutotraceTraceonly() {
  autotrace_query_->exec(logic_constants::SET_AUTOTRACE_TRACEONLY);
}

void AutotraceExecutor::OnSetAutotraceOnTraceonlyExplain() {
  autotrace_query_->exec(logic_constants::SET_AUTOTRACE_ON_TRACEONLY_EXPLAIN);
}

void AutotraceExecutor::OnSetAutotraceOnTraceonlyStatistics() {
  autotrace_query_->exec(logic_constants::SET_AUTOTRACE_ON_TRACEONLY_STATS);
}
