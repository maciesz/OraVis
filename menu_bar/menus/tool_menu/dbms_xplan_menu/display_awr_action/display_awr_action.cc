#include "display_awr_action.hh"

#include "constants/string_view_constants.hh"

namespace menu_bar {

DisplayAWRAction::DisplayAWRAction(QWidget *parent)
    : AbstractDisplayAction(parent) {
  setText(view_constants::DISPLAY_AWR_ACTION_TITLE);
}

}  // namespace menu_bar
