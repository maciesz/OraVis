#ifndef ABSTRACT_KEYWORD_LAYOUT_MANAGER_HH_
#define ABSTRACT_KEYWORD_LAYOUT_MANAGER_HH_

#include <QCheckBox>
#include <QList>
#include <QVBoxLayout>

class AbstractKeywordLayoutManager : public QVBoxLayout {

 Q_OBJECT

 public:
  explicit AbstractKeywordLayoutManager(QWidget *parent = 0);

  virtual void AddCheckBoxWidgets() = 0;
  virtual void SetCheckboxText() = 0;

  virtual ~AbstractKeywordLayoutManager() {}

  virtual QList<QCheckBox*>* GetCheckboxList() const = 0;

 signals:

 public slots:

 protected:
  virtual void AddCheckboxToList() = 0;
};

#endif  // ABSTRACT_KEYWORD_LAYOUT_MANAGER_HH_
