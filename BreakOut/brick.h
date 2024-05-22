#ifndef BRICK_H
#define BRICK_H

#include <QImage>
#include <QRect>
#include <QTextStream>

class Brick {
 public:
  Brick(int, int);
  ~Brick();

 public:
  bool isDestoryed();
  void setDestoryed(bool);
  QRect getRect();
  void setRect(QRect);
  QImage& getImage();

 private:
  QImage image;
  QRect rect;
  bool destoryed;
};

#endif  // BRICK_H
