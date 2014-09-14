#include "main_window/main_window.hh"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      menu_bar_manager_(new menu_bar::MenuBarManager(this))/*,
      widget_(new DbmsXplanSettingsWidget())*/ {
  //setCentralWidget(this);
  this->setMenuBar(menu_bar_manager_);
  /*QMenu* a = menuBar()->addMenu("Ala");
  a->addAction("DASDASD");
  menuBar()->show();*/
  //widget_->show();
  //layout()->addWidget(widget_);
}

MainWindow::~MainWindow() {

}
