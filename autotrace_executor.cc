#include "autotrace_executor.hh"

#include "constants/string_logic_constants.hh"

AutotraceExecutor::AutotraceExecutor(QObject *parent) :
    QObject(parent) {
}

//=============================================================================
// slots
//=============================================================================
void AutotraceController::OnSetAutotraceOff() {
  autotrace_query_.exec(logic_constants::SET_AUTOTRACE_OFF_);
}

void AutotraceController::OnSetAutotraceOnExplain() {
  autotrace_query_.exec(logic_constants::SET_AUTOTRACE_ON_EXPLAIN);
}

void AutotraceController::OnSetAutotraceOnStatistics() {
  autotrace_query_.exec(logic_constants::SET_AUTOTRACE_ON_STATISTICS);
}

void AutotraceController::OnSetAutotraceOn() {
  autotrace_query_.exec(logic_constants::SET_AUTOTRACE_ON);
}

void AutotraceController::OnSetAutotraceTraceonly() {
  autotrace_query_.exec(logic_constants::SET_AUTOTRACE_TRACEONLY);
}

void AutotraceController::OnSetAutotraceOnTraceonlyExplain() {
  autotrace_query_.exec(logic_constants::SET_AUTOTRACE_ON_TRACEONLY_EXPLAIN);
}

void AutotraceController::OnSetAutotraceOnTraceonlyStatistics() {
  autotrace_query_.exec(logic_constants::SET_AUTOTRACE_ON_TRACEONLY_STATS);
}
