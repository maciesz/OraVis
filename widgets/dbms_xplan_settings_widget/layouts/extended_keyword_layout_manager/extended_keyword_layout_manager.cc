#include "extended_keyword_layout_manager.hh"

#include  "constants/string_view_constants.hh"

ExtendedKeywordLayoutManager::ExtendedKeywordLayoutManager(QWidget *parent)
    : AbstractKeywordLayoutManager(parent),
      parallel_(new QCheckBox()),
      remote_(new QCheckBox()),
      iostats_(new QCheckBox()),
      memstats_(new QCheckBox()),
      allstats_(new QCheckBox()),
      last_(new QCheckBox()),
      checkbox_list_(new QList<QCheckBox*>()) {
  AddCheckBoxWidgets();
  SetCheckboxText();
  AddCheckboxToList();
}

ExtendedKeywordLayoutManager::~ExtendedKeywordLayoutManager() {
  delete parallel_;
  delete remote_;
  delete iostats_;
  delete memstats_;
  delete allstats_;
  delete last_;
  delete checkbox_list_;
}

void ExtendedKeywordLayoutManager::AddCheckBoxWidgets() {
  addWidget(parallel_);
  addWidget(remote_);
  addWidget(iostats_);
  addWidget(memstats_);
  addWidget(allstats_);
  addWidget(last_);
}

void ExtendedKeywordLayoutManager::SetCheckboxText() {
  parallel_->setText(view_constants::DBMS_XPLAN_FORMAT_KEYWORD_PARALLEL);
  remote_->setText(view_constants::DBMS_XPLAN_FORMAT_KEYWORD_REMOTE);
  iostats_->setText(view_constants::DBMS_XPLAN_FORMAT_KEYWORD_IOSTATS);
  memstats_->setText(view_constants::DBMS_XPLAN_FORMAT_KEYWORD_MEMSTATS);
  allstats_->setText(view_constants::DBMS_XPLAN_FORMAT_KEYWORD_ALLSTATS);
  last_->setText(view_constants::DBMS_XPLAN_FORMAT_KEYWORD_LAST);
}

void ExtendedKeywordLayoutManager::AddCheckboxToList() {
  checkbox_list_->append(parallel_);
  checkbox_list_->append(remote_);
  checkbox_list_->append(iostats_);
  checkbox_list_->append(memstats_);
  checkbox_list_->append(allstats_);
  checkbox_list_->append(last_);
}

QList<QCheckBox*>* ExtendedKeywordLayoutManager::GetCheckboxList() const {
  return checkbox_list_;
}
