#ifndef STANDARD_KEYWORD_LAYOUT_MANAGER_HH
#define STANDARD_KEYWORD_LAYOUT_MANAGER_HH

#include <QCheckBox>
#include <QList>

#include "widgets/dbms_xplan_settings_widget/layouts/abstract_keyword_layout_manager/abstract_keyword_layout_manager.hh"

class StandardKeywordLayoutManager : public AbstractKeywordLayoutManager {

 Q_OBJECT

 public:
  explicit StandardKeywordLayoutManager(QWidget *parent = 0);

  void AddCheckBoxWidgets();
  void SetCheckboxText();

  virtual ~StandardKeywordLayoutManager();

  QList<QCheckBox*>* GetCheckboxList() const;

 signals:

 public slots:

 private:
  void AddCheckboxToList();

  QCheckBox* rows_;
  QCheckBox* bytes_;
  QCheckBox* cost_;
  QCheckBox* partition_;
  QCheckBox* predicate_;
  QCheckBox* projection_;
  QCheckBox* alias_;
  QCheckBox* note_;

  QList<QCheckBox*>* checkbox_list_;
};

#endif // STANDARD_KEYWORD_LAYOUT_MANAGER_HH
