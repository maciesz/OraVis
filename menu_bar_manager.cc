#include "menu_bar_manager.hh"

namespace menu_bar {

MenuBarManager::MenuBarManager(QWidget *parent)
    : QMenuBar(parent),
      tool_menu_(new ToolMenu(this)) {
  tool_menu_->setTitle("Tulsy");
  this->addMenu(tool_menu_);
}

void MenuBarManager::DrawToolMenu() {

}

}  // namespace menu_bar
