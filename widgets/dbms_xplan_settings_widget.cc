#include "dbms_xplan_settings_widget.hh"

#include "constants/string_view_constants.hh"

DbmsXplanSettingsWidget::DbmsXplanSettingsWidget(QWidget *parent)
    : QWidget(parent),
      display_options_(new QComboBox(/*this*/)),
      standard_formats_(new QComboBox(/*this*/)),
      widget_layout_(new QGridLayout(/*this*/)),
      format_layout_(new QVBoxLayout(/*this*/)),
      submit_(new QPushButton(/*this*/)),
      keywords_(new QStringList()),
      format_label_(new QLabel(/*this*/)),
      non_exclusive_keywords_box_(new QVBoxLayout(/*this*/)) {
}

DbmsXplanSettingsWidget::~DbmsXplanSettingsWidget() {
  //delete keywords_;
}

void DbmsXplanSettingsWidget::setFormatBox() {

  display_options_->addItem(view_constants::DBMS_XPLAN_OPTION_DEFAULT_DISPLAY);
  display_options_->addItem(view_constants::DBMS_XPLAN_OPTION_DISPLAY_AWR);
  display_options_->addItem(view_constants::DBMS_XPLAN_OPTION_DISPLAY_CURSOR);
  display_options_->addItem(view_constants::DBMS_XPLAN_OPTION_DISPLAY_SQL_SET);

  standard_formats_->addItem(view_constants::DBMS_XPLAN_FORMAT_BASIC);
  standard_formats_->addItem(view_constants::DBMS_XPLAN_FORMAT_TYPICAL);
  standard_formats_->addItem(view_constants::DBMS_XPLAN_FORMAT_SERIAL);
  standard_formats_->addItem(view_constants::DBMS_XPLAN_FORMAT_ALL);

  format_label_ = new QLabel(this);
  format_label_->setText("Option");
  format_label_->setBuddy(standard_formats_);

  option_label_ = new QLabel(this);
  option_label_->setText("Format");
  option_label_->setBuddy(display_options_);

  format_layout_->addWidget(option_label_);
  format_layout_->addWidget(format_label_);

  format_box_ = new QGroupBox(this);
  format_box_->setLayout(format_layout_);
}

void DbmsXplanSettingsWidget::setKeywordsBox() {


}
