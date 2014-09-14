#include "format_keyword_layout_manager.hh"

FormatKeywordLayoutManager::FormatKeywordLayoutManager(QWidget *parent)
    : QVBoxLayout(parent),
      rows_(new QCheckBox("DSASA")),
      bytes_(new QCheckBox()),
      cost_(new QCheckBox()),
      partition_(new QCheckBox()),
      parallel_(new QCheckBox()),
      predicate_(new QCheckBox()),
      projection_(new QCheckBox()),
      alias_(new QCheckBox()),
      remote_(new QCheckBox()),
      note_(new QCheckBox()),
      iostats_(new QCheckBox()),
      memstats_(new QCheckBox()),
      allstats_(new QCheckBox()),
      last_(new QCheckBox()) {
  AddCheckBoxWidgets();
}

FormatKeywordLayoutManager::~FormatKeywordLayoutManager() {
  delete rows_;
  delete bytes_;
  delete cost_;
  delete partition_;
  delete parallel_;
  delete predicate_;
  delete projection_;
  delete alias_;
  delete remote_;
  delete note_;
  delete iostats_;
  delete memstats_;
  delete allstats_;
  delete last_;
}

void FormatKeywordLayoutManager::AddCheckBoxWidgets() {
  addWidget(rows_);
  addWidget(bytes_);
  addWidget(cost_);
  addWidget(partition_);
  addWidget(parallel_);
  addWidget(predicate_);
  addWidget(projection_);
  addWidget(alias_);
  addWidget(remote_);
  addWidget(note_);
  addWidget(iostats_);
  addWidget(memstats_);
  addWidget(allstats_);
  addWidget(last_);
}
