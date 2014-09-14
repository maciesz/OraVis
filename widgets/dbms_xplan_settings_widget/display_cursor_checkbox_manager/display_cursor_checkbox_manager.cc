#include "display_cursor_checkbox_manager.hh"

DisplayCursorCheckboxManager::DisplayCursorCheckboxManager(QWidget *parent) :
    AbstractDisplayCheckboxManager(parent) {
}

void DisplayCursorCheckboxManager::InitBaseCheckboxStateMap() {
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_ROWS,
    CheckboxState::CHECKED_ENABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_BYTES,
    CheckboxState::CHECKED_ENABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_COST,
    CheckboxState::CHECKED_ENABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_PARTITION,
    CheckboxState::UNCHECKED_ENABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_PARALLEL,
    CheckboxState::UNCHECKED_ENABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_PREDICATE,
    CheckboxState::UNCHECKED_ENABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_PROJECTION,
    CheckboxState::UNCHECKED_ENABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_ALIAS,
    CheckboxState::UNCHECKED_ENABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_REMOTE,
    CheckboxState::UNCHECKED_ENABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_NOTE,
    CheckboxState::UNCHECKED_ENABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_IOSTATS,
    CheckboxState::UNCHECKED_ENABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_MEMSTATS,
    CheckboxState::UNCHECKED_ENABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_ALLSTATS,
    CheckboxState::UNCHECKED_ENABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_LAST,
    CheckboxState::UNCHECKED_ENABLED);
}
