#include "display_sql_set_action.hh"

#include "constants/string_view_constants.hh"

namespace menu_bar {

DisplaySQLSetAction::DisplaySQLSetAction(QWidget *parent) :
    AbstractDisplayAction(parent) {
  setText(view_constants::DISPLAY_SQL_SET_ACTION_TITLE);
  setDisabled(true);
}

}  // namespace menu_bar
