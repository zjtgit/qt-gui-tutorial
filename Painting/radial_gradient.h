#ifndef RADIALGRADIENT_H
#define RADIALGRADIENT_H

#include <QWidget>
#include <QApplication>
#include <QPainter>
class RadialGradient : public QWidget {
  Q_OBJECT
 public:
  explicit RadialGradient(QWidget *parent = nullptr);

 protected:
  void paintEvent(QPaintEvent *event);

 private:
  void doPainting();

 signals:
};

#endif  // RADIALGRADIENT_H
