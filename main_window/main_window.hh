#ifndef MAINWINDOW_HH_
#define MAINWINDOW_HH_

#include <QMainWindow>

#include "menu_bar/menu_bar_manager.hh"

class MainWindow : public QMainWindow {

 Q_OBJECT

 public:
  MainWindow(QWidget *parent = 0);

  ~MainWindow();

 private:
  menu_bar::MenuBarManager* menu_bar_manager_;
};

#endif  // MAINWINDOW_HH_
