#include "transparent_rectangles.h"

TransparentRectangles::TransparentRectangles(QWidget *parent)
    : QWidget{parent} {}

void TransparentRectangles::paintEvent(QPaintEvent *event) {
  Q_UNUSED(event);
  doPainting();
}

void TransparentRectangles::doPainting() {
  QPainter painter(this);

  for (int i = 0; i < 20; ++i) {
    painter.setOpacity(i * 0.1);
    painter.fillRect(50 * i, 20, 40, 40, Qt::darkGray);
  }
}
