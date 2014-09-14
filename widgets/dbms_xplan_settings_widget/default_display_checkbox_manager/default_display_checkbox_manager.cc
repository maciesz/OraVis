#include "default_display_checkbox_manager.hh"

#include "constants/string_view_constants.hh"

DefaultDisplayCheckboxManager::DefaultDisplayCheckboxManager(QWidget *parent) :
    AbstractDisplayCheckboxManager(parent) {
  //InitCheckboxMaps();
}

/*void DefaultDisplayCheckboxManager::InitCheckboxMaps() {
  InitBaseCheckboxStateMap();
  InitTypicalCheckboxStateMap();
  InitSerialCheckboxStateMap();
  InitAllCheckboxStateMap();
  InitLastCustomizedCheckBoxStateMap();
}*/

void DefaultDisplayCheckboxManager::InitBaseCheckboxStateMap() {
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
    CheckboxState::UNCHECKED_DISABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_MEMSTATS,
    CheckboxState::UNCHECKED_DISABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_ALLSTATS,
    CheckboxState::UNCHECKED_DISABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_LAST,
    CheckboxState::UNCHECKED_DISABLED);
}
