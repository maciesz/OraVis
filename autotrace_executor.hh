#ifndef AUTOTRACE_CONTROLLER_HH_
#define AUTOTRACE_CONTROLLER_HH_

#include <QObject>
#include <QtSql>

/**
 * \brief Class responsible for managing 'Autotrace' sql commands.
 */
class AutotraceExecutor : public QObject {

 Q_OBJECT

 public:
  explicit AutotraceExecutor(QObject *parent = 0);

 signals:
  /** \defgroup EnableAutotraceOptions
   *  @{
   *  Signals influencing Menu Autotrace Options access.
   *  @param bool: true -> enable, false -> disable
   */
  void EnableAutotraceOnOptions(bool);

  void EnableAutotraceOffOption(bool);
  /** @}*/

 public slots:
  /** \defgroup OnSetAutotrace
   *  @{
   *  Each single slot in defined group is called just after hit
   *  on appropriate Menu action.
   *  Responsibility: preforming desariable statement on database.
   *  It is guaranteed that database connection is still valid
   *  before handling the Autotrace Option.
   */
  void OnSetAutotraceOff();

  void OnSetAutotraceOnExplain();

  void OnSetAutotraceOnStatistics();

  void OnSetAutotraceOn();

  void OnSetAutotraceTraceonly();

  void OnSetAutotraceOnTraceonlyExplain();

  void OnSetAutotraceOnTraceonlyStatistics();
  /** @}*/

 private:
  QSqlQuery* autotrace_query_;
};

#endif  // AUTOTRACE_CONTROLLER_HH_
