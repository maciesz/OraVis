#ifndef MAINWINDOW_HH_
#define MAINWINDOW_HH_

#include <QMainWindow>

class MainWindow : public QMainWindow {

 Q_OBJECT

 public:
  MainWindow(QWidget *parent = 0);

  ~MainWindow();
};

#endif  // MAINWINDOW_HH_
