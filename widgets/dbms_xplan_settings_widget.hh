#ifndef WIDGETS_DBMS_XPLAN_SETTINGS_WIDGET_HH_
#define WIDGETS_DBMS_XPLAN_SETTINGS_WIDGET_HH

#include <QCheckBox>
#include <QComboBox>
#include <QGridLayout>
#include <QGroupBox>
#include <QLabel>
#include <QLayout>
#include <QPushButton>
#include <QRadioButton>
#include <QStringList>
#include <QVBoxLayout>
#include <QWidget>

class DbmsXplanSettingsWidget : public QWidget {

 Q_OBJECT

 public:
  explicit DbmsXplanSettingsWidget(QWidget* parent = 0);

  ~DbmsXplanSettingsWidget();

 signals:

 public slots:

 private:
  void setFormatBox();

  void setKeywordsBox();

  QComboBox* display_options_;
  QComboBox* standard_formats_;

  QGridLayout* widget_layout_;

  QGroupBox* format_box_;
  QGroupBox* keywords_;

  QLabel* format_label_;
  QLabel* option_label_;

  QPushButton* submit_;

  QVBoxLayout* format_layout_;
  QVBoxLayout* non_exclusive_keywords_box_;
};

#endif  // WIDGETS_DBMS_XPLAN_SETTINGS_WIDGET_HH
