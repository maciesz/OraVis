#ifndef BOARD_PREVIEW_LAYOUT_HH
#define BOARD_PREVIEW_LAYOUT_HH

#include <QGridLayout>

namespace layout {

class BoardPreviewLayout : public QGridLayout {

 Q_OBJECT

 public:
  explicit BoardPreviewLayout(QWidget *parent = 0);

 signals:

 public slots:

};

}  // namespace layout

#endif  // BOARD_PREVIEW_LAYOUT_HH
