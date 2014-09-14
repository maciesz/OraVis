#include "abstract_display_checkbox_manager.hh"

#include "constants/string_view_constants.hh"

AbstractDisplayCheckboxManager::AbstractDisplayCheckboxManager(QWidget *parent)
    : QWidget(parent),
      checkbox_setter_(new CheckboxSetter(this)),
      basic_checkbox_state_map_(new CheckboxStateMap()),
      typical_checkbox_state_map_(new CheckboxStateMap()),
      serial_checkbox_state_map_(new CheckboxStateMap()),
      all_checkbox_state_map_(new CheckboxStateMap()),
      last_customized_checkbox_state_map_(new CheckboxStateMap()) {
}

AbstractDisplayCheckboxManager::~AbstractDisplayCheckboxManager() {
  delete basic_checkbox_state_map_;
  delete typical_checkbox_state_map_;
  delete serial_checkbox_state_map_;
  delete all_checkbox_state_map_;
  delete all_checkbox_state_map_;
  delete last_customized_checkbox_state_map_;
}

void AbstractDisplayCheckboxManager::OnPassValidCheckboxConfiguration(
    const QString option) {
  if (option == view_constants::DBMS_XPLAN_FORMAT_BASIC)
    checkbox_setter_->SetCheckboxStateMap(basic_checkbox_state_map_);
  else if (option == view_constants::DBMS_XPLAN_FORMAT_TYPICAL)
    checkbox_setter_->SetCheckboxStateMap(typical_checkbox_state_map_);
  else if (option == view_constants::DBMS_XPLAN_FORMAT_SERIAL)
    checkbox_setter_->SetCheckboxStateMap(serial_checkbox_state_map_);
  else if (option == view_constants::DBMS_XPLAN_FORMAT_ALL)
    checkbox_setter_->SetCheckboxStateMap(all_checkbox_state_map_);
  else if (option == view_constants::DBMS_XPLAN_FORMAT_CUSTOM)
    checkbox_setter_->SetCheckboxStateMap(last_customized_checkbox_state_map_);

  emit SendValidCheckboxConfiguration(checkbox_setter_);
}

void AbstractDisplayCheckboxManager::CopyCollection(
    const CheckboxStateMap *source, CheckboxStateMap *target) {
  for (CheckboxStateMapConstIterator it = source->constBegin();
      it != source->constEnd(); ++it)
    target->insert(it.key(), it.value());
}

void AbstractDisplayCheckboxManager::SetCheckedEnabled(
    CheckboxStateMap* map, const QString key_name) {
  CheckboxStateMapConstIterator map_it = map->constFind(key_name);
  if (map_it != map->constEnd())
    map->insert(map_it.key(), CHECKED_ENABLED);
}

void AbstractDisplayCheckboxManager::SetCheckedDisabled(
    CheckboxStateMap* map, const QString key_name) {
  CheckboxStateMapConstIterator map_it = map->constFind(key_name);
  if (map_it != map->constEnd())
    map->insert(map_it.key(), CHECKED_DISABLED);
}

void AbstractDisplayCheckboxManager::SetUncheckedEnabled(
    CheckboxStateMap* map, const QString key_name) {
  CheckboxStateMapConstIterator map_it = map->constFind(key_name);
  if (map_it != map->constEnd())
    map->insert(map_it.key(), UNCHECKED_ENABLED);
}

void AbstractDisplayCheckboxManager::SetUncheckedDisabled(
    CheckboxStateMap* map, const QString key_name) {
  CheckboxStateMapIterator map_it = map->find(key_name);
  if (map_it != map->end())
    map->insert(map_it.key(), UNCHECKED_DISABLED);
}

void AbstractDisplayCheckboxManager::InitBaseDependantCheckboxMaps() {
  InitTypicalCheckboxStateMap();
  InitSerialCheckboxStateMap();
  InitAllCheckboxStateMap();
  InitLastCustomizedCheckBoxStateMap();
}

void AbstractDisplayCheckboxManager::InitTypicalCheckboxStateMap() {

  CheckboxStateMapIterator typical_it;
  for (CheckboxStateMapIterator it = basic_checkbox_state_map_->begin();
      it != basic_checkbox_state_map_->end(); ++it) {
    const QString keyword = it.key();
    const CheckboxState state = it.value();
    typical_it = typical_checkbox_state_map_->insert(keyword, state);

    if (state == UNCHECKED_ENABLED)
      typical_checkbox_state_map_->insert(keyword, CHECKED_DISABLED);
  }

  SetUncheckedEnabled(typical_checkbox_state_map_,
      view_constants::DBMS_XPLAN_FORMAT_KEYWORD_PROJECTION);
  SetUncheckedEnabled(typical_checkbox_state_map_,
      view_constants::DBMS_XPLAN_FORMAT_KEYWORD_ALIAS);
  SetUncheckedEnabled(typical_checkbox_state_map_,
      view_constants::DBMS_XPLAN_FORMAT_KEYWORD_REMOTE);
}

void AbstractDisplayCheckboxManager::InitSerialCheckboxStateMap() {
  CopyCollection(typical_checkbox_state_map_, serial_checkbox_state_map_);

  SetUncheckedDisabled(serial_checkbox_state_map_,
      view_constants::DBMS_XPLAN_FORMAT_KEYWORD_PARALLEL);
}

void AbstractDisplayCheckboxManager::InitAllCheckboxStateMap() {
  CopyCollection(typical_checkbox_state_map_, all_checkbox_state_map_);

  SetCheckedDisabled(all_checkbox_state_map_,
      view_constants::DBMS_XPLAN_FORMAT_KEYWORD_PROJECTION);
  SetCheckedDisabled(all_checkbox_state_map_,
      view_constants::DBMS_XPLAN_FORMAT_KEYWORD_ALIAS);
  SetCheckedDisabled(all_checkbox_state_map_,
      view_constants::DBMS_XPLAN_FORMAT_KEYWORD_REMOTE);
}

void AbstractDisplayCheckboxManager::InitLastCustomizedCheckBoxStateMap() {
  CopyCollection(basic_checkbox_state_map_,
      last_customized_checkbox_state_map_);
}
