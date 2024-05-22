#ifndef TRANSPARENTRECTANGLES_H
#define TRANSPARENTRECTANGLES_H

#include <QWidget>
#include <QApplication>
#include <QPainter>
#include <QPainterPath>

class TransparentRectangles : public QWidget {
  Q_OBJECT
 public:
  explicit TransparentRectangles(QWidget *parent = nullptr);

 protected:
    void paintEvent(QPaintEvent* event);
    void doPainting();
 signals:
};

#endif  // TRANSPARENTRECTANGLES_H
