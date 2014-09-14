#ifndef ABSTRACT_DISPLAY_CHECKBOX_MANAGER_HH
#define ABSTRACT_DISPLAY_CHECKBOX_MANAGER_HH

#include <QWidget>

#include <QCheckBox>
#include <QMap>
#include <QObject>
#include <QString>

class AbstractDisplayCheckboxManager : public QWidget {

 Q_OBJECT
 Q_ENUMS(CheckboxState)

 public:
  enum /*class*/ CheckboxState {
    CHECKED_ENABLED,
    CHECKED_DISABLED,
    UNCHECKED_ENABLED,
    UNCHECKED_DISABLED
  };

  //typedef AbstractDisplayCheckboxManager::CheckboxSetter CheckboxSetterType;
  typedef QMap<QString, CheckboxState> CheckboxStateMap;
  typedef CheckboxStateMap::const_iterator CheckboxStateMapConstIterator;
  typedef CheckboxStateMap::iterator CheckboxStateMapIterator;
  //typedef CheckboxSetter::const_iterator CheckboxSetterIterator;

  explicit AbstractDisplayCheckboxManager(QWidget *parent = 0);

  virtual ~AbstractDisplayCheckboxManager();


  class CheckboxSetter : public QWidget {
   public:
    void SetCheckbox(const QString name, QCheckBox* checkbox) const {
      CheckboxStateMapConstIterator it = checkbox_map_->constFind(name);

      const CheckboxState state = it.value();
      if (it != checkbox_map_->constEnd()) {
        switch (state) {
         case CHECKED_ENABLED:
           checkbox->setChecked(true);
           checkbox->setEnabled(true);
           break;
          case CHECKED_DISABLED:
           checkbox->setChecked(true);
           checkbox->setDisabled(true);
           break;
          case UNCHECKED_ENABLED:
           checkbox->setChecked(false);
           checkbox->setEnabled(true);
           break;
          case UNCHECKED_DISABLED:
           checkbox->setChecked(false);
           checkbox->setDisabled(true);
           break;
        }
      }
    }

   private:
    friend class AbstractDisplayCheckboxManager;

    CheckboxSetter(QWidget* parent = 0) : QWidget(parent) {}

    void SetCheckboxStateMap(CheckboxStateMap* map) {
      checkbox_map_ = map;
    }

    CheckboxStateMap* checkbox_map_;
  };

 signals:
  virtual void PassValidCheckboxConfiguration(
      CheckboxSetter* checkbox_configuration);

 public slots:
  virtual void OnPassValidCheckboxConfiguration(const QString option);

 protected:
  virtual void InitBaseCheckboxStateMap() = 0;

  CheckboxSetter* checkbox_setter_;

  CheckboxStateMap* basic_checkbox_state_map_;
  CheckboxStateMap* typical_checkbox_state_map_;
  CheckboxStateMap* serial_checkbox_state_map_;
  CheckboxStateMap* all_checkbox_state_map_;
  CheckboxStateMap* last_customized_checkbox_state_map_;

 private:
  void CopyCollection(const CheckboxStateMap* source,
      CheckboxStateMap *target);

  void SetCheckedEnabled(CheckboxStateMap* map, const QString key_name);
  void SetCheckedDisabled(CheckboxStateMap* map, const QString key_name);
  void SetUncheckedEnabled(CheckboxStateMap* map, const QString key_name);
  void SetUncheckedDisabled(CheckboxStateMap* map, const QString key_name);

  void InitCheckboxMaps();
  void InitTypicalCheckboxStateMap();
  void InitSerialCheckboxStateMap();
  void InitAllCheckboxStateMap();
  void InitLastCustomizedCheckBoxStateMap();
};

#endif // ABSTRACT_DISPLAY_CHECKBOX_MANAGER_HH
