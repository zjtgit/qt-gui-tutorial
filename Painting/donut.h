#ifndef DONUT_H
#define DONUT_H

#include <QWidget>
#include <QApplication>
#include <QPainter>

class Donut : public QWidget {
  Q_OBJECT
 public:
  explicit Donut(QWidget *parent = nullptr);

 protected:
  void paintEvent(QPaintEvent *event);

 private:
  void doPainting();

 signals:
};

#endif  // DONUT_H
