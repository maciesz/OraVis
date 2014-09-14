#ifndef DISPLAY_AWR_CHECKBOX_MANAGER_HH_
#define DISPLAY_AWR_CHECKBOX_MANAGER_HH_

#include "widgets/dbms_xplan_settings_widget/checkbox_managers/abstract_display_checkbox_manager/abstract_display_checkbox_manager.hh"

class DisplayAWRCheckboxManager : public AbstractDisplayCheckboxManager {

 Q_OBJECT

 public:
  explicit DisplayAWRCheckboxManager(QWidget *parent = 0);

 signals:

 public slots:

 private:
  virtual void InitBaseCheckboxStateMap();
};

#endif  // DISPLAY_AWR_CHECKBOX_MANAGER_HH_
