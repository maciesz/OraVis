#include "autotrace_controller.hh"

AutotraceController::AutotraceController(QObject *parent) :
    QObject(parent) {
}

//=============================================================================
// slots
//=============================================================================
void AutotraceController::OnSetAutotraceOff() {
  autotrace_query_.exec("SET AUTOTRACE OFF");
}

void AutotraceController::OnSetAutotraceOnExplain() {
  autotrace_query_.exec("SET AUTOTRACE ON EXPLAIN");
}

void AutotraceController::OnSetAutotraceOnStatistics() {
  autotrace_query_.exec("SET AUTOTRACE ON STATISTICS");
}

void AutotraceController::OnSetAutotraceOn() {
  autotrace_query_.exec("SET AUTOTRACE ON");
}

void AutotraceController::OnSetAutotraceTraceonly() {
  autotrace_query_.exec("SET AUTOTRACE TRACEONLY");
}

void AutotraceController::OnSetAutotraceOnTraceonlyExplain() {
  autotrace_query_.exec("SET AUTOTRACE ON TRACEONLY EXPLAIN");
}

void AutotraceController::OnSetAutotraceOnTraceonlyStatistics() {
  autotrace_query_.exec("SET AUTOTRACE ON TRACEONLY STATISTICS");
}
