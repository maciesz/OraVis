#include "display_awr_checkbox_manager.hh"

#include "constants/string_view_constants.hh"

DisplayAWRCheckboxManager::DisplayAWRCheckboxManager(QWidget *parent) :
    AbstractDisplayCheckboxManager(parent) {
}

void DisplayAWRCheckboxManager::InitBaseCheckboxStateMap() {
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_ROWS,
    CHECKED_ENABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_BYTES,
    CHECKED_ENABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_COST,
    CHECKED_ENABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_PARTITION,
    UNCHECKED_ENABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_PARALLEL,
    UNCHECKED_ENABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_PREDICATE,
    UNCHECKED_ENABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_PROJECTION,
    UNCHECKED_ENABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_ALIAS,
    UNCHECKED_ENABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_REMOTE,
    UNCHECKED_ENABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_NOTE,
    UNCHECKED_ENABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_IOSTATS,
    UNCHECKED_DISABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_MEMSTATS,
    UNCHECKED_DISABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_ALLSTATS,
    UNCHECKED_DISABLED);
  basic_checkbox_state_map_->insert(
    view_constants::DBMS_XPLAN_FORMAT_KEYWORD_LAST,
    UNCHECKED_DISABLED);
}
