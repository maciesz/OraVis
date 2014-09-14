#include "menu_bar/menus/tool_menu/dbms_xplan_menu/default_display_action/display_action.hh"

#include "constants/string_view_constants.hh"

namespace menu_bar {

DisplayAction::DisplayAction(QWidget *parent) :
    AbstractDisplayAction(parent) {
  setText(view_constants::DEFAULT_DISPLAY_ACTION_TITLE);
}

}  // namespace menu_bar
