#ifndef SNAKE_H
#define SNAKE_H

#include <QKeyEvent>
#include <QPainter>
#include <QString>
#include <QTime>
#include <QWidget>
//#include <QRandomGenerator>

class Snake : public QWidget {
  Q_OBJECT
 public:
  explicit Snake(QWidget *parent = nullptr);

 protected:
  void paintEvent(QPaintEvent *event);
  void timerEvent(QTimerEvent *event);
  void keyPressEvent(QKeyEvent *event);

 private:
  QImage dot;
  QImage head;
  QImage apple;

  static const int B_WIDTH = 900;
  static const int B_HEIGHT = 900;
  static const int DOT_SIZE = 10;
  static const int ALL_DOTS = B_WIDTH * B_HEIGHT / DOT_SIZE / DOT_SIZE;
  static const int RAND_POS = 29;
  static const int DELAY = 200;

  int timerId;
  int dots;
  int apple_x;
  int apple_y;

  int x[ALL_DOTS];
  int y[ALL_DOTS];

  bool leftDirection;
  bool rightDirection;
  bool upDirection;
  bool downDirection;
  bool inGame;

  void loadImages();
  void initGame();
  void locateApple();
  void checkApple();
  void checkCOllision();
  void move();
  void doDrawing();
  void gameOver(QPainter &qp);

 signals:
};

#endif  // SNAKE_H
