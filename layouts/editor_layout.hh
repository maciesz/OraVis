#ifndef LAYOUTS_EDITOR_LAYOUT_HH_
#define LAYOUTS_EDITOR_LAYOUT_HH_

#include <QGridLayout>

namespace layout {

class EditorLayout : public QGridLayout {

 Q_OBJECT

 public:
  explicit EditorLayout(QWidget *parent = 0);

 signals:

 public slots:

};

}  // namespace layout

#endif  // LAYOUTS_EDITOR_LAYOUT_HH_
