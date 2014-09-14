#ifndef EXTENDED_KEYWORD_LAYOUT_MANAGER_HH
#define EXTENDED_KEYWORD_LAYOUT_MANAGER_HH

#include "widgets/dbms_xplan_settings_widget/layouts/abstract_keyword_layout_manager/abstract_keyword_layout_manager.hh"

#include <QCheckBox>

class ExtendedKeywordLayoutManager : public AbstractKeywordLayoutManager {

 Q_OBJECT

 public:
  explicit ExtendedKeywordLayoutManager(QWidget *parent = 0);

  void AddCheckBoxWidgets();
  void SetCheckboxText();

  virtual ~ExtendedKeywordLayoutManager();

  QList<QCheckBox*>* GetCheckboxList() const;

 signals:

 public slots:

 private:
  void AddCheckboxToList();

  QCheckBox* parallel_;
  QCheckBox* remote_;
  QCheckBox* iostats_;
  QCheckBox* memstats_;
  QCheckBox* allstats_;
  QCheckBox* last_;

  QList<QCheckBox*>* checkbox_list_;
};

#endif // EXTENDED_KEYWORD_LAYOUT_MANAGER_HH
