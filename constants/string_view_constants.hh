#ifndef CONSTANTS_STRING_VIEW_CONSTANTS_HH_
#define CONSTANTS_STRING_VIEW_CONSTANTS_HH_

#include <QString>
#include <QStringList>

namespace view_constants {

  static const QString TOOLS_MENU_TITLE("Tools");
  static const QString AUTOTRACE_MENU_TITLE("Autotrace working mode");
  static const QString DBMS_XPLAN_MENU_TITLE("DBMS_XPLAN Settings");

  static const QString SET_AUTOTRACE_OFF_ACTION_TITLE("Off");
  static const QString SET_AUTOTRACE_ON_EXPLAIN_ACTION_TITLE("On Explain");
  static const QString SET_AUTOTRACE_ON_STATISTICS_ACTION_TITLE("On Stats");
  static const QString SET_AUTOTRACE_ON_ACTION_TITLE("On");
  static const QString SET_AUTOTRACE_TRACEONLY_ACTION_TITLE("Traceonly");
  static const QString SET_AUTOTRACE_ON_TRACEONLY_EXPLAIN_ACTION_TITLE(
      "On Traceonly Explain");
  static const QString SET_AUTOTRACE_ON_TRACEONLY_STATS_ACTION_TITLE(
      "On Traceonly Stats");

  static const QString DEFAULT_DISPLAY_ACTION_TITLE("Display");
  static const QString DISPLAY_AWR_ACTION_TITLE("Display AWR");
  static const QString DISPLAY_CURSOR_ACTION_TITLE("Display Cursor");
  static const QString DISPLAY_SQL_SET_ACTION_TITLE("Display SQLSet");

  static const QString DBMS_XPLAN_SETTINGS_WIDGET_FORMAT_BOX_TITLE(
      "Standard formatting");
  static const QString DBMS_XPLAN_SETTINGS_WIDGET_KEYWORD_BOX_TITLE(
      "Select keywords");
  static const QString DBMS_XPLAN_SETTINGS_WIDGET_SUBMIT_BUTTON_TEXT("Save");

  static const QString DBMS_XPLAN_FORMAT_KEYWORD_ROWS("ROWS");
  static const QString DBMS_XPLAN_FORMAT_KEYWORD_BYTES("BYTES");
  static const QString DBMS_XPLAN_FORMAT_KEYWORD_COST("COST");
  static const QString DBMS_XPLAN_FORMAT_KEYWORD_PARTITION("PARTITION");
  static const QString DBMS_XPLAN_FORMAT_KEYWORD_PARALLEL("PARALLEL");
  static const QString DBMS_XPLAN_FORMAT_KEYWORD_PREDICATE("PREDICATE");
  static const QString DBMS_XPLAN_FORMAT_KEYWORD_PROJECTION("PROJECTION");
  static const QString DBMS_XPLAN_FORMAT_KEYWORD_ALIAS("ALIAS");
  static const QString DBMS_XPLAN_FORMAT_KEYWORD_REMOTE("REMOTE");
  static const QString DBMS_XPLAN_FORMAT_KEYWORD_NOTE("NOTE");
  static const QString DBMS_XPLAN_FORMAT_KEYWORD_IOSTATS("IOSTATS");
  static const QString DBMS_XPLAN_FORMAT_KEYWORD_MEMSTATS("MEMSTATS");
  static const QString DBMS_XPLAN_FORMAT_KEYWORD_ALLSTATS("ALLSTATS");
  static const QString DBMS_XPLAN_FORMAT_KEYWORD_LAST("LAST");

  static const QString DBMS_XPLAN_FORMAT_BASIC("BASIC");
  static const QString DBMS_XPLAN_FORMAT_TYPICAL("TYPICAL");
  static const QString DBMS_XPLAN_FORMAT_SERIAL("SERIAL");
  static const QString DBMS_XPLAN_FORMAT_ALL("ALL");
  static const QString DBMS_XPLAN_FORMAT_CUSTOM("CUSTOM");

  static const QString DBMS_XPLAN_OPTION_DEFAULT_DISPLAY("Display");
  static const QString DBMS_XPLAN_OPTION_DISPLAY_AWR("Display AWR");
  static const QString DBMS_XPLAN_OPTION_DISPLAY_CURSOR("Display Cursor");
  static const QString DBMS_XPLAN_OPTION_DISPLAY_SQL_SET("Display Sql Set");

}  // namespace view_constants

#endif  // CONSTANTS_STRING_VIEW_CONSTANTS_HH_
