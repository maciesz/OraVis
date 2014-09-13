#include "main_window/main_window.hh"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      menu_bar_manager_(new menu_bar::MenuBarManager(this)) {
  //setCentralWidget(this);
  this->setMenuBar(menu_bar_manager_);
  /*QMenu* a = menuBar()->addMenu("Ala");
  a->addAction("DASDASD");
  menuBar()->show();*/
}

MainWindow::~MainWindow() {

}
