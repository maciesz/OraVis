#include "autotrace_controller.hh"

using namespace AutotraceSetting;

AutotraceController::AutotraceController(QObject *parent) :
    QObject(parent), current_setting_parameter_(SET_AUTOTRACE_OFF) {
}

AutotraceSetting AutotraceController::getAutotraceInfo() {
  return current_setting_parameter_;
}

void AutotraceController::StartAutotrace(
    const AutotraceSetting setting_parameter) {
  current_setting_parameter_ = setting_parameter;
  switch (setting_parameter) {
    case SET_AUTOTRACE_OFF:
      autotrace_query_.exec("SET AUTOTRACE OFF");
      break;
    case SET_AUTOTRACE_ON_EXPLAIN:
      autotrace_query_.exec("SET AUTOTRACE ON EXPLAIN") ;
      break;
    case SET_AUTOTRACE_ON_STATISTICS:
      autotrace_query_.exec("SET AUTOTRACE ON STATISTICS");
      break;
    case SET_AUTOTRACE_ON:
      autotrace_query_.exec("SET AUTOTRACE ON");
      break;
    case SET_AUTOTRACE_TRACEONLY:
      autotrace_query_.exec("SET AUTOTRACE TRACEONLY");
      break;
    case SET_AUTOTRACE_ON_TRACEONLY_EXPLAIN:
      autotrace_query_.exec("SET AUTOTRACE ON TRACEONLY EXPLAIN");
      break;
    case SET_AUTOTRACE_ON_TRACEONLY_STATISTICS:
      autotrace_query_.exec("SET AUTOTRACE ON TRACEONLY STATISTICS");
      break;
    default:
      break;
  }
}
