#ifndef EXTENDED_KEYWORD_LAYOUT_MANAGER_HH
#define EXTENDED_KEYWORD_LAYOUT_MANAGER_HH

#include "widgets/dbms_xplan_settings_widget/abstract_keyword_layout_manager/abstract_keyword_layout_manager.hh"

#include <QCheckBox>

class ExtendedKeywordLayoutManager : public AbstractKeywordLayoutManager {

 Q_OBJECT

 public:
  explicit ExtendedKeywordLayoutManager(QWidget *parent = 0);

  void AddCheckBoxWidgets();
  void SetCheckboxText();

  QCheckBox* parallel_;
  QCheckBox* remote_;
  QCheckBox* iostats_;
  QCheckBox* memstats_;
  QCheckBox* allstats_;
  QCheckBox* last_;

  virtual ~ExtendedKeywordLayoutManager();

 signals:

 public slots:

};

#endif // EXTENDED_KEYWORD_LAYOUT_MANAGER_HH
