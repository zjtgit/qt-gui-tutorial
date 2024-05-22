#include "brick.h"

Brick::Brick(int x, int y) {
  image.load("/home/zjt/code/gui/tutorial/images/brick.png");
  destoryed = false;
  rect = image.rect();
  rect.translate(x, y);
}

Brick::~Brick() {
  QTextStream out(stdout);
  out << "Brick deleted! " << endl;
}

QRect Brick::getRect() { return rect; }

void Brick::setRect(QRect rect_in) { rect = rect_in; }

QImage& Brick::getImage() { return image; }

bool Brick::isDestoryed() { return destoryed; }

void Brick::setDestoryed(bool destr) { destoryed = destr; }
