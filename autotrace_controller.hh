#ifndef AUTOTRACE_CONTROLLER_HH
#define AUTOTRACE_CONTROLLER_HH

#include <QObject>
#include <QtSql>

#include "autotrace_setting.hh"

/**
 * \brief Class responsible for managing 'Autotrace' sql commands.
 */
class AutotraceController : public QObject {
  Q_OBJECT
 public:
  explicit AutotraceController(QObject *parent = 0);

  /**
   * @brief Gather info about current Autotrace state.
   */
  AutotraceSetting getAutotraceInfo() const;

  /**
   * @brief Start autotracing using specified parameter as setting.
   */
  void StartAutotrace(const AutotraceSetting& setting_parameter);

  /**
   * @brief Stop autotracing immediately.
   */
  void StopAutotrace();

 signals:

 public slots:

 private:
  AutotraceSetting current_setting_parameter_;

  QSqlQuery autotrace_query_;
};

#endif // AUTOTRACE_CONTROLLER_HH
