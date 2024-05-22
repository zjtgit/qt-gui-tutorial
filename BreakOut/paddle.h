#ifndef PADDLE_H
#define PADDLE_H
#include <QImage>
#include <QRect>
#include <QTextStream>

class Paddle {
 public:
  Paddle();
  ~Paddle();

  void resetState();
  void move();
  void setDx(int x);
  QRect getRect();
  QImage& getImage();

 private:
  QImage image;
  QRect rect;
  int dx;
  static constexpr int INITIAL_X = 200;
  static constexpr int INITIAL_Y = 360;
};

#endif  // PADDLE_H
