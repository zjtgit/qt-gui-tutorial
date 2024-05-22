#include "donut.h"

Donut::Donut(QWidget *parent) : QWidget{parent} {}

void Donut::paintEvent(QPaintEvent *event) {
  Q_UNUSED(event);
  doPainting();
}

void Donut::doPainting() {
  QPainter painter(this);

  painter.setPen(QPen(QBrush("#535353"), 0.5));
  painter.setRenderHint(QPainter::Antialiasing);
  //  painter.setRenderHint(QPainter::TextAntialiasing);
  //  painter.setRenderHint(QPainter::SmoothPixmapTransform);

  int h = height();
  int w = width();

  painter.translate(QPoint(w / 2, h / 2));

  for (int rot = 0; rot < 360; rot += 5) {
    painter.drawEllipse(-125, -40, 250, 80);
    painter.rotate(5.0);
  }
}
