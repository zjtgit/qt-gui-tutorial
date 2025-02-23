#include "paddle.h"

Paddle::Paddle() {
  dx = 0;
  image.load("/home/zjt/code/gui/tutorial/images/paddle.png");
  rect = image.rect();
  resetState();
}

Paddle::~Paddle() {
  QTextStream out(stdout);
  out << "Paddle deleted! " << endl;
}

void Paddle::setDx(int x) { dx = x; }

void Paddle::move() {
  int x = rect.x() + dx;
  int y = rect.top();

  rect.moveTo(x, y);
}

void Paddle::resetState() { rect.moveTo(INITIAL_X, INITIAL_Y); }

QRect Paddle::getRect() { return rect; }

QImage &Paddle::getImage() { return image; }
