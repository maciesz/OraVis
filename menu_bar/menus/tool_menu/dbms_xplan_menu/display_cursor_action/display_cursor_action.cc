#include "display_cursor_action.hh"

#include "constants/string_view_constants.hh"

namespace menu_bar {

DisplayCursorAction::DisplayCursorAction(QWidget *parent) :
    AbstractDisplayAction(parent) {
  setText(view_constants::DISPLAY_CURSOR_ACTION_TITLE);
}

}  // namespace menu_bar

