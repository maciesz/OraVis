#ifndef OUTPUT_LAYOUT_HH
#define OUTPUT_LAYOUT_HH

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

#endif  // OUTPUT_LAYOUT_HH
