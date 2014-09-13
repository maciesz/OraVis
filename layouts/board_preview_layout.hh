#ifndef LAYOUTS_BOARD_PREVIEW_LAYOUT_HH_
#define LAYOUTS_BOARD_PREVIEW_LAYOUT_HH_

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

#endif  // LAYOUTS_BOARD_PREVIEW_LAYOUT_HH_
