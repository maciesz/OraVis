#ifndef LAYOUTS_LAYOUT_MANAGER_HH_
#define LAYOUTS_LAYOUT_MANAGER_HH_

#include <QGridLayout>

namespace layout {

class LayoutManager : public QGridLayout {

 Q_OBJECT

 public:
  explicit LayoutManager(QWidget *parent = 0);

 signals:

 public slots:

};

}  // namespace layout

#endif  // LAYOUTS_LAYOUT_MANAGER_HH_
