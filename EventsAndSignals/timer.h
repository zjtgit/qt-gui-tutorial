#ifndef TIMER_H
#define TIMER_H

#include <QHBoxLayout>
#include <QLabel>
#include <QTime>
#include <QWidget>

class Timer : public QWidget {
  Q_OBJECT
 public:
  explicit Timer(QWidget *parent = nullptr);

 protected:
  void timerEvent(QTimerEvent *e);

 private:
  QLabel *label;
 signals:
};

#endif  // TIMER_H
