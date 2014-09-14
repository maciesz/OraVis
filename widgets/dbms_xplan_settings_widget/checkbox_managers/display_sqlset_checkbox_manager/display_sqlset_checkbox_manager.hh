#ifndef DISPLAY_SQLSET_CHECKBOX_MANAGER_HH_
#define DISPLAY_SQLSET_CHECKBOX_MANAGER_HH_

#include "widgets/dbms_xplan_settings_widget/checkbox_managers/abstract_display_checkbox_manager/abstract_display_checkbox_manager.hh"

class DisplaySQLSetCheckboxManager : public AbstractDisplayCheckboxManager {

 Q_OBJECT

 public:
  explicit DisplaySQLSetCheckboxManager(QWidget *parent = 0);

 signals:

 public slots:

 private:
  void InitBaseCheckboxStateMap();
};

#endif  // DISPLAY_SQLSET_CHECKBOX_MANAGER_HH_
