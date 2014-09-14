#include "dbms_xplan_settings_widget.hh"

#include "constants/string_view_constants.hh"

DbmsXplanSettingsWidget::DbmsXplanSettingsWidget(QWidget *parent)
    : QWidget(parent),
      display_options_(new QComboBox(/*this*/)),
      standard_formats_(new QComboBox(/*this*/)),
      widget_layout_(new QGridLayout(this)),
      format_box_(new QGroupBox(/*this*/)),
      format_keyword_box_(new QGroupBox()),
      standard_keyword_box_(new QGroupBox()),
      extended_keyword_box_(new QGroupBox()),
      format_label_(new QLabel(/*this*/)),
      option_label_(new QLabel(/*this*/)),
      submit_(new QPushButton(/*this*/)),
      format_layout_(new QVBoxLayout(/*this*/)),
      format_keyword_layout_(new QHBoxLayout()),
      standard_keywords_layout_(new StandardKeywordLayoutManager(/*this*/)),
      extended_keywords_layout_(new ExtendedKeywordLayoutManager()) {
  SetFormatBox();
  SetFormatKeywordBox();
  this->setWindowTitle("DSAAD");
  widget_layout_->addWidget(format_box_, 0, 0, 1, 2);
  widget_layout_->addWidget(format_keyword_box_, 0, 2, 2, 3);

  show();
  //setLayout(widget_layout_);
}

void DbmsXplanSettingsWidget::SetFormatBox() {

  display_options_->addItem(view_constants::DBMS_XPLAN_OPTION_DEFAULT_DISPLAY);
  display_options_->addItem(view_constants::DBMS_XPLAN_OPTION_DISPLAY_AWR);
  display_options_->addItem(view_constants::DBMS_XPLAN_OPTION_DISPLAY_CURSOR);
  display_options_->addItem(view_constants::DBMS_XPLAN_OPTION_DISPLAY_SQL_SET);

  standard_formats_->addItem(view_constants::DBMS_XPLAN_FORMAT_BASIC);
  standard_formats_->addItem(view_constants::DBMS_XPLAN_FORMAT_TYPICAL);
  standard_formats_->addItem(view_constants::DBMS_XPLAN_FORMAT_SERIAL);
  standard_formats_->addItem(view_constants::DBMS_XPLAN_FORMAT_ALL);

  format_label_->setText("Option");
  format_label_->setBuddy(standard_formats_);

  option_label_->setText("Format");
  option_label_->setBuddy(display_options_);
  
  format_layout_->addWidget(option_label_);
  format_layout_->addWidget(display_options_);
  format_layout_->addWidget(format_label_);
  format_layout_->addWidget(standard_formats_);

  format_box_->setTitle(
      view_constants::DBMS_XPLAN_SETTINGS_WIDGET_FORMAT_BOX_TITLE);
  format_box_->setLayout(format_layout_);
}

void DbmsXplanSettingsWidget::SetStandardKeywordBox() {
  standard_keyword_box_->setTitle(
      view_constants::DBMS_XPLAN_SETTINGS_WIDGET_KEYWORD_BOX_TITLE);
  standard_keyword_box_->setLayout(standard_keywords_layout_);
}

void DbmsXplanSettingsWidget::SetExtendedKeywordBox() {
  extended_keyword_box_->setTitle("Extended Blabla");
  extended_keyword_box_->setLayout(extended_keywords_layout_);
}

void DbmsXplanSettingsWidget::SetFormatKeywordBox() {
  SetStandardKeywordBox();
  SetExtendedKeywordBox();
  format_keyword_box_->setTitle("Keywords");
  format_keyword_layout_->addWidget(standard_keyword_box_);
  format_keyword_layout_->addWidget(extended_keyword_box_);
  format_keyword_box_->setLayout(format_keyword_layout_);
}
