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
      extended_keywords_layout_(new ExtendedKeywordLayoutManager()),
      default_display_checkbox_manager_(new DefaultDisplayCheckboxManager(this)),
      display_awr_checkbox_manager_(new DisplayAWRCheckboxManager(this)),
      display_cursor_checkbox_manager_(new DisplayCursorCheckboxManager(this)),
      display_sqlset_checkbox_manager_(new DisplaySQLSetCheckboxManager(this)) {
  SetConnects();
  SetFormatBox();
  SetFormatKeywordBox();
  this->setWindowTitle("DSAAD");
  widget_layout_->addWidget(format_box_, 0, 0, 1, 2);
  widget_layout_->addWidget(format_keyword_box_, 0, 2, 2, 3);

  show();
}

void DbmsXplanSettingsWidget::OnCurrentFormatTextChanged(
    const QString format_text) {
  const QString option_text = display_options_->currentText();
  EmitSignalForValidCheckboxConfiguration(option_text, format_text);
}

void DbmsXplanSettingsWidget::OnCurrentOptionTextChanged(
    const QString option_text) {
  const QString format_text = standard_formats_->currentText();
  EmitSignalForValidCheckboxConfiguration(option_text, format_text);
}

void DbmsXplanSettingsWidget::OnApplyFilter() {
  // TODO, zapisać gdzieś czy coś.
  // Ale jakoś ładnie, tak, żeby dało się to potem wczytać, no wiesz..
}

void DbmsXplanSettingsWidget::OnCloseWidget() {

}

void DbmsXplanSettingsWidget::SetConnects() {
  connect(display_options_,
          SIGNAL(currentTextChanged(QString)),
          this,
          SLOT(OnCurrentOptionTextChanged(QString)));

  connect(standard_formats_,
          SIGNAL(currentTextChanged(QString)),
          this,
          SLOT(OnCurrentFormatTextChanged(QString)));

  // Request valid checkbox config
  connect(this,
          SIGNAL(DefaultDisplayManagerPassValidCheckboxConfiguration(QString)),
          default_display_checkbox_manager_,
          SLOT(OnPassValidCheckboxConfiguration(QString)));

  connect(this,
          SIGNAL(DisplayAWRManagerPassValidCheckboxConfiguration(QString)),
          display_awr_checkbox_manager_,
          SLOT(OnPassValidCheckboxConfiguration(QString)));

  connect(this,
          SIGNAL(DisplayCursorManagerPassValidCheckboxConfiguration(QString)),
          display_cursor_checkbox_manager_,
          SLOT(OnPassValidCheckboxConfiguration(QString)));

  connect(this,
          SIGNAL(DisplaySqlSetManagerPassValidCheckboxConfiguration(QString)),
          display_sqlset_checkbox_manager_,
          SLOT(OnPassValidCheckboxConfiguration(QString)));

  // Apply valid checkbox display
  connect(default_display_checkbox_manager_,
          SIGNAL(SendValidCheckboxConfiguration(
              AbstractDisplayCheckboxManager::CheckboxSetter*)),
          this,
          SLOT(OnUpdateCheckboxMenu(
              AbstractDisplayCheckboxManager::CheckboxSetter*)));

  connect(display_awr_checkbox_manager_,
          SIGNAL(SendValidCheckboxConfiguration(
              AbstractDisplayCheckboxManager::CheckboxSetter*)),
          this,
          SLOT(OnUpdateCheckboxMenu(
              AbstractDisplayCheckboxManager::CheckboxSetter*)));

  connect(display_cursor_checkbox_manager_,
          SIGNAL(SendValidCheckboxConfiguration(
              AbstractDisplayCheckboxManager::CheckboxSetter*)),
          this,
          SLOT(OnUpdateCheckboxMenu(
              AbstractDisplayCheckboxManager::CheckboxSetter*)));

  connect(display_sqlset_checkbox_manager_,
          SIGNAL(SendValidCheckboxConfiguration(
              AbstractDisplayCheckboxManager::CheckboxSetter*)),
          this,
          SLOT(OnUpdateCheckboxMenu(
              AbstractDisplayCheckboxManager::CheckboxSetter*)));

}

void DbmsXplanSettingsWidget::UpdateCheckboxMenu(
    const AbstractDisplayCheckboxManager::CheckboxSetter* checkbox_setter,
    QList<QCheckBox*>* checkbox_list) {
  for (QList<QCheckBox*>::iterator it = checkbox_list->begin();
      it != checkbox_list->end(); ++it)
    checkbox_setter->SetCheckbox(*it);
}

void DbmsXplanSettingsWidget::OnUpdateCheckboxMenu(
    AbstractDisplayCheckboxManager::CheckboxSetter* checkbox_setter) {
  QList<QCheckBox*>* checkbox_list;

  checkbox_list = standard_keywords_layout_->GetCheckboxList();
  UpdateCheckboxMenu(checkbox_setter, checkbox_list);

  checkbox_list = extended_keywords_layout_->GetCheckboxList();
  UpdateCheckboxMenu(checkbox_setter, checkbox_list);
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
  standard_formats_->addItem(view_constants::DBMS_XPLAN_FORMAT_CUSTOM);

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

void DbmsXplanSettingsWidget::EmitSignalForValidCheckboxConfiguration(
    const QString option_text, const QString format_text) {
  if (option_text == view_constants::DBMS_XPLAN_OPTION_DEFAULT_DISPLAY)
    emit DefaultDisplayManagerPassValidCheckboxConfiguration(format_text);
  else if (option_text == view_constants::DBMS_XPLAN_OPTION_DISPLAY_AWR)
    emit DisplayAWRManagerPassValidCheckboxConfiguration(format_text);
  else if (option_text == view_constants::DBMS_XPLAN_OPTION_DISPLAY_CURSOR)
    emit DisplayCursorManagerPassValidCheckboxConfiguration(format_text);
  else if (option_text == view_constants::DBMS_XPLAN_OPTION_DISPLAY_SQL_SET)
    emit DisplaySqlSetManagerPassValidCheckboxConfiguration(format_text);
}
