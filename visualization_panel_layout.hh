#ifndef VISUALIZATION_PANEL_LAYOUT_HH
#define VISUALIZATION_PANEL_LAYOUT_HH

#include <QGridLayout>

namespace layout {

class VisualizationPanelLayout : public QGridLayout {

 Q_OBJECT

 public:
  explicit VisualizationPanelLayout(QWidget *parent = 0);

 signals:

 public slots:

};

}  // namespace layout

#endif  // VISUALIZATION_PANEL_LAYOUT_HH
