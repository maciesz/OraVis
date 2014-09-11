#ifndef LAYOUT_MANAGER_HH
#define LAYOUT_MANAGER_HH

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

#endif  // LAYOUT_MANAGER_HH
