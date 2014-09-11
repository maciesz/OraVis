#ifndef EDITOR_LAYOUT_HH
#define EDITOR_LAYOUT_HH

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

#endif  // EDITOR_LAYOUT_HH
