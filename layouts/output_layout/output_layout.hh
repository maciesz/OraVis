#ifndef LAYOUTS_OUTPUT_LAYOUT_HH_
#define LAYOUTS_OUTPUT_LAYOUT_HH_

#include <QGridLayout>

namespace layout {

class OutputLayout : public QGridLayout {

 Q_OBJECT

 public:
  explicit OutputLayout(QWidget *parent = 0);

 signals:

 public slots:

};

}  // namespace layout

#endif  // LAYOUTS_OUTPUT_LAYOUT_HH_
