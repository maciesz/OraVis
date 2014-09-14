#ifndef WIDGETS_DBMS_XPLAN_SETTINGS_WIDGET_FORMAT_KEYWORD_LAYOUT_MANAGER_HH_
#define WIDGETS_DBMS_XPLAN_SETTINGS_WIDGET_FORMAT_KEYWORD_LAYOUT_MANAGER_HH_

#include <QCheckBox>
#include <QVBoxLayout>

class FormatKeywordLayoutManager : public QVBoxLayout {

 Q_OBJECT

 public:
  explicit FormatKeywordLayoutManager(QWidget *parent = 0);

  ~FormatKeywordLayoutManager();

 signals:

 public slots:
  void OnDefaultKeywordsForBasicOption();
  void OnDefaultKeywordsForTypicalOption();
  void OnDefaultKeywordsForSerialOption();
  void OnDefaultKeywordsForAllOption();

 private:
  void AddCheckBoxWidgets();

  QCheckBox* rows_;
  QCheckBox* bytes_;
  QCheckBox* cost_;
  QCheckBox* partition_;
  QCheckBox* parallel_;
  QCheckBox* predicate_;
  QCheckBox* projection_;
  QCheckBox* alias_;
  QCheckBox* remote_;
  QCheckBox* note_;
  QCheckBox* iostats_;
  QCheckBox* memstats_;
  QCheckBox* allstats_;
  QCheckBox* last_;
};

#endif  // WIDGETS_DBMS_XPLAN_SETTINGS_WIDGET_FORMAT_KEYWORD_LAYOUT_MANAGER_HH_
