#ifndef WIDGETS_DBMS_XPLAN_SETTINGS_WIDGET_HH_
#define WIDGETS_DBMS_XPLAN_SETTINGS_WIDGET_HH_

#include <QCheckBox>
#include <QComboBox>
#include <QGridLayout>
#include <QGroupBox>
#include <QLabel>
#include <QLayout>
#include <QPushButton>
#include <QRadioButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

#include "standard_keyword_layout_manager/standard_keyword_layout_manager.hh"
#include "extended_keyword_layout_manager/extended_keyword_layout_manager.hh"

class DbmsXplanSettingsWidget : public QWidget {

 Q_OBJECT

 public:
  explicit DbmsXplanSettingsWidget(QWidget* parent = 0);

 signals:

 public slots:

 private:
  void SetFormatBox();
  void SetFormatKeywordBox();
  void SetStandardKeywordBox();
  void SetExtendedKeywordBox();

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
};

#endif  // WIDGETS_DBMS_XPLAN_SETTINGS_WIDGET_HH_
