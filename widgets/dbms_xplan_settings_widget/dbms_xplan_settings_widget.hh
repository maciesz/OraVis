#ifndef WIDGETS_DBMS_XPLAN_SETTINGS_WIDGET_HH_
#define WIDGETS_DBMS_XPLAN_SETTINGS_WIDGET_HH_

#include <QAction>
#include <QCheckBox>
#include <QComboBox>
#include <QGraphicsGridLayout>
#include <QGridLayout>
#include <QGroupBox>
#include <QLabel>
#include <QLayout>
#include <QList>
#include <QPushButton>
#include <QRadioButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

#include "checkbox_managers/abstract_display_checkbox_manager/abstract_display_checkbox_manager.hh"
#include "checkbox_managers/default_display_checkbox_manager/default_display_checkbox_manager.hh"
#include "checkbox_managers/display_awr_checkbox_manager/display_awr_checkbox_manager.hh"
#include "checkbox_managers/display_cursor_checkbox_manager/display_cursor_checkbox_manager.hh"
#include "checkbox_managers/display_sqlset_checkbox_manager/display_sqlset_checkbox_manager.hh"

#include "widgets/dbms_xplan_settings_widget/layouts/standard_keyword_layout_manager/standard_keyword_layout_manager.hh"
#include "widgets/dbms_xplan_settings_widget/layouts/extended_keyword_layout_manager/extended_keyword_layout_manager.hh"

class DbmsXplanSettingsWidget : public QWidget {

 Q_OBJECT

 public:
  explicit DbmsXplanSettingsWidget(QWidget* parent = 0);

 signals:
  void DefaultDisplayManagerPassValidCheckboxConfiguration(
      const QString format_text);
  void DisplayAWRManagerPassValidCheckboxConfiguration(
      const QString format_text);
  void DisplayCursorManagerPassValidCheckboxConfiguration(
      const QString format_text);
  void DisplaySqlSetManagerPassValidCheckboxConfiguration(
      const QString format_text);

 public slots:
  void OnUpdateCheckboxMenu(
      AbstractDisplayCheckboxManager::CheckboxSetter* checkbox_setter);

 private:
  void UpdateCheckboxMenu(
      const AbstractDisplayCheckboxManager::CheckboxSetter* checkbox_setter,
      QList<QCheckBox*>* checkbox_list);

  void SetConnects();

  void SetFormatBox();
  void SetFormatKeywordBox();
  void SetStandardKeywordBox();
  void SetExtendedKeywordBox();

  void EmitSignalForValidCheckboxConfiguration(const QString option_text,
      const QString format_text);

  QComboBox* display_options_;
  QComboBox* standard_formats_;

  QGridLayout* widget_layout_;

  QGroupBox* format_box_;
  QGroupBox* format_keyword_box_;
  QGroupBox* standard_keyword_box_;
  QGroupBox* extended_keyword_box_;
  QGroupBox* table_box_;

  QLabel* format_label_;
  QLabel* option_label_;

  QPushButton* submit_;

  QVBoxLayout* format_layout_;
  QHBoxLayout* format_keyword_layout_;

  StandardKeywordLayoutManager* standard_keywords_layout_;
  ExtendedKeywordLayoutManager* extended_keywords_layout_;

  DefaultDisplayCheckboxManager* default_display_checkbox_manager_;
  DisplayAWRCheckboxManager* display_awr_checkbox_manager_;
  DisplayCursorCheckboxManager* display_cursor_checkbox_manager_;
  DisplaySQLSetCheckboxManager* display_sqlset_checkbox_manager_;

  //QGraphicsLayout* background_layout_;

 private slots:
  void OnCurrentFormatTextChanged(const QString format_text);
  void OnCurrentOptionTextChanged(const QString option_text);

  void OnApplyFilter();

  void OnCloseWidget();
};

#endif  // WIDGETS_DBMS_XPLAN_SETTINGS_WIDGET_HH_
