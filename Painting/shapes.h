#ifndef SHAPES_H
#define SHAPES_H

#include <QWidget>
#include <QApplication>
#include <QPainter>
#include <QPainterPath>

class Shapes : public QWidget {
  Q_OBJECT
 public:
  explicit Shapes(QWidget *parent = nullptr);

 protected:
  void paintEvent(QPaintEvent *event);

 private:
  void doPainting();

 signals:
};

#endif  // SHAPES_H
