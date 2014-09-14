#ifndef MAINWINDOW_HH_
#define MAINWINDOW_HH_

#include <QMainWindow>

#include "menu_bar/menu_bar_manager/menu_bar_manager.hh"
#include "widgets/dbms_xplan_settings_widget/dbms_xplan_settings_widget.hh"

class MainWindow : public QMainWindow {

 Q_OBJECT

 public:
  MainWindow(QWidget *parent = 0);

  ~MainWindow();

 private:
  menu_bar::MenuBarManager* menu_bar_manager_;

  DbmsXplanSettingsWidget* widget_;
};

#endif  // MAINWINDOW_HH_
