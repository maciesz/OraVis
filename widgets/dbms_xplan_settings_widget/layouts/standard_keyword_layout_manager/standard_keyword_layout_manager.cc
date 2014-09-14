#include "standard_keyword_layout_manager.hh"

#include "constants/string_view_constants.hh"

StandardKeywordLayoutManager::StandardKeywordLayoutManager(QWidget *parent)
    : AbstractKeywordLayoutManager(parent),
      rows_(new QCheckBox()),
      bytes_(new QCheckBox()),
      cost_(new QCheckBox()),
      partition_(new QCheckBox()),
      predicate_(new QCheckBox()),
      projection_(new QCheckBox()),
      alias_(new QCheckBox()),
      note_(new QCheckBox()),
      checkbox_list_(new QList<QCheckBox*>()) {
  AddCheckBoxWidgets();
  SetCheckboxText();
  AddCheckboxToList();
}

StandardKeywordLayoutManager::~StandardKeywordLayoutManager() {
  delete rows_;
  delete bytes_;
  delete cost_;
  delete partition_;
  delete predicate_;
  delete projection_;
  delete alias_;
  delete note_;
  delete checkbox_list_;
}

void StandardKeywordLayoutManager::AddCheckBoxWidgets() {
  addWidget(rows_);
  addWidget(bytes_);
  addWidget(cost_);
  addWidget(partition_);
  addWidget(predicate_);
  addWidget(projection_);
  addWidget(alias_);
  addWidget(note_);
}

void StandardKeywordLayoutManager::SetCheckboxText() {
  rows_->setText(view_constants::DBMS_XPLAN_FORMAT_KEYWORD_ROWS);
  bytes_->setText(view_constants::DBMS_XPLAN_FORMAT_KEYWORD_BYTES);
  cost_->setText(view_constants::DBMS_XPLAN_FORMAT_KEYWORD_COST);
  partition_->setText(view_constants::DBMS_XPLAN_FORMAT_KEYWORD_PARTITION);
  predicate_->setText(view_constants::DBMS_XPLAN_FORMAT_KEYWORD_PREDICATE);
  projection_->setText(view_constants::DBMS_XPLAN_FORMAT_KEYWORD_PROJECTION);
  alias_->setText(view_constants::DBMS_XPLAN_FORMAT_KEYWORD_ALIAS);
  note_->setText(view_constants::DBMS_XPLAN_FORMAT_KEYWORD_NOTE);
}

void StandardKeywordLayoutManager::AddCheckboxToList() {
  checkbox_list_->append(rows_);
  checkbox_list_->append(bytes_);
  checkbox_list_->append(cost_);
  checkbox_list_->append(partition_);
  checkbox_list_->append(predicate_);
  checkbox_list_->append(projection_);
  checkbox_list_->append(alias_);
  checkbox_list_->append(note_);
}

QList<QCheckBox*>* StandardKeywordLayoutManager::GetCheckboxList() const {
  return checkbox_list_;
}
