#ifndef PROGRESSBAREX_H
#define PROGRESSBAREX_H
#include <QGridLayout>
#include <QProgressBar>
#include <QPushButton>
#include <QTimer>
#include <QWidget>

class ProgressBarEx : public QWidget {
  Q_OBJECT
 public:
  explicit ProgressBarEx(QWidget *parent = nullptr);

 private:
  int progress;
  QTimer *timer;
  QProgressBar *pbar;
  QPushButton *startBtn;
  QPushButton *stopBtn;
  static const int DELAY = 200;
  static const int MAX_VALUE = 100;

  void updateBar();
  void startMyTimer();
  void stopMyTimer();
 signals:
};

#endif  // PROGRESSBAREX_H
