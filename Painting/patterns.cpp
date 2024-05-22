#include "patterns.h"

Patterns::Patterns(QWidget *parent) : QWidget{parent} {}

void Patterns::paintEvent(QPaintEvent *event) {
  Q_UNUSED(event);
  doPainting();
}

void Patterns::doPainting() {
  QPainter painter(this);
  painter.setPen(Qt::NoPen);

  painter.setBrush(Qt::HorPattern);
  painter.drawRect(10, 15, 90, 60);

  painter.setBrush(Qt::VerPattern);
  painter.drawRect(130, 15, 90, 60);

  painter.setBrush(Qt::CrossPattern);
  painter.drawRect(250, 15, 90, 60);

  painter.setBrush(Qt::Dense7Pattern);
  painter.drawRect(10, 105, 90, 60);

  painter.setBrush(Qt::Dense6Pattern);
  painter.drawRect(130, 105, 90, 60);

  painter.setBrush(Qt::Dense5Pattern);
  painter.drawRect(250, 105, 90, 60);

  painter.setBrush(Qt::Dense4Pattern);
  painter.drawRect(10, 195, 90, 60);

  painter.setBrush(Qt::Dense3Pattern);
  painter.drawRect(130, 195, 90, 60);

  painter.setBrush(Qt::Dense2Pattern);
  painter.drawRect(250, 195, 90, 60);

  painter.setBrush(Qt::Dense1Pattern);
  painter.drawRect(10, 285, 90, 60);

  painter.setBrush(Qt::SolidPattern);
  painter.drawRect(130, 285, 90, 60);

  painter.setBrush(Qt::BDiagPattern);
  painter.drawRect(250, 285, 90, 60);

  painter.setBrush(Qt::FDiagPattern);
  painter.drawRect(10, 375, 90, 60);

  painter.setBrush(Qt::DiagCrossPattern);
  painter.drawRect(130, 375, 90, 60);

  //  painter.setBrush(Qt::TexturePattern);
  //  painter.drawRect(250, 375, 90, 60);
}
