#ifndef BALL_H
#define BALL_H
#include <QImage>
#include <QRect>
#include <QTextStream>

class Ball {
 public:
  Ball();
  ~Ball();

  void resetState();
  void autoMove();
  void setXDir(int);
  void setYDir(int);
  int getXDir();
  int getYDir();

  QRect getRect();
  QImage& getImage();

 private:
  int xdir;
  int ydir;
  QImage image;
  QRect rect;
  static constexpr int INITIAL_X = 230;
  static constexpr int INITIAL_Y = 355;
  static constexpr int RIGHT_EDGE = 300;
};

#endif  // BALL_H
