#ifndef DISPLAY_CURSOR_CHECKBOX_MANAGER_HH_
#define DISPLAY_CURSOR_CHECKBOX_MANAGER_HH_

#include "widgets/dbms_xplan_settings_widget/abstract_display_checkbox_manager/abstract_display_checkbox_manager.hh"

class DisplayCursorCheckboxManager : public AbstractDisplayCheckboxManager {

 Q_OBJECT

 public:
  explicit DisplayCursorCheckboxManager(QWidget *parent = 0);

 signals:

 public slots:

 private:
  void InitBaseCheckboxStateMap();
};

#endif  // DISPLAY_CURSOR_CHECKBOX_MANAGER_HH_
