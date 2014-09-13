#include "menu_bar/menu_bar_manager/menu_bar_manager.hh"

namespace menu_bar {

MenuBarManager::MenuBarManager(QWidget *parent)
    : QMenuBar(parent),
      tool_menu_(new ToolMenu(this)) {
  this->addMenu(tool_menu_);
}

void MenuBarManager::DrawToolMenu() {

}

}  // namespace menu_bar
