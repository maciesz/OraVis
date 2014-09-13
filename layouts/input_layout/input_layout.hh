#ifndef LAYOUTS_INPUT_LAYOUT_HH_
#define LAYOUTS_INPUT_LAYOUT_HH_

#include <QGridLayout>

namespace layout {

class InputLayout : public QGridLayout {

 Q_OBJECT

 public:
  explicit InputLayout(QWidget *parent = 0);

 signals:

 public slots:

};

}  // namespace layout

#endif  // LAYOUTS_INPUT_LAYOUT_HH_
