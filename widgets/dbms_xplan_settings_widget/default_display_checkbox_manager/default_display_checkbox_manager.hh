#ifndef DEFAULT_DISPLAY_CHECKBOX_MANAGER_HH_
#define DEFAULT_DISPLAY_CHECKBOX_MANAGER_HH_

#include "widgets/dbms_xplan_settings_widget/abstract_display_checkbox_manager/abstract_display_checkbox_manager.hh"

class DefaultDisplayCheckboxManager : public AbstractDisplayCheckboxManager {

 Q_OBJECT

 public:
  explicit DefaultDisplayCheckboxManager(QWidget *parent = 0);

 signals:

 public slots:

 private:
  virtual void InitBaseCheckboxStateMap();
};

#endif  // DEFAULT_DISPLAY_CHECKBOX_MANAGER_HH_
