#ifndef LAYOUTS_VISUALIZATION_PANEL_LAYOUT_HH_
#define LAYOUTS_VISUALIZATION_PANEL_LAYOUT_HH_

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

#endif  // LAYOUTS_VISUALIZATION_PANEL_LAYOUT_HH_
