#ifndef INPUT_LAYOUT_HH
#define INPUT_LAYOUT_HH

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

#endif  // INPUT_LAYOUT_HH
