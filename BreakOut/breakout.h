#ifndef BREAKOUT_H
#define BREAKOUT_H

#include <QKeyEvent>
#include <QPainter>
#include <QString>
#include <QTimer>
#include <QWidget>
#include <QApplication>

#include "ball.h"
#include "brick.h"
#include "paddle.h"

class Breakout : public QWidget {
  Q_OBJECT
 public:
  explicit Breakout(QWidget *parent = nullptr);
  ~Breakout();

 protected:
  void paintEvent(QPaintEvent *);
  void timerEvent(QTimerEvent *);
  void keyPressEvent(QKeyEvent *);
  void keyReleaseEvent(QKeyEvent *);
  void drawObjects(QPainter *);
  void finishGame(QPainter *, QString);
  void moveObjects();

  void startGame();
  void pauseGame();
  void stopGame();
  void victory();
  void checkCollision();

 private:
  int x;
  int timerId;
  static constexpr int N_OF_BRICKS = 30;
  static constexpr int DELAY = 10;
  static constexpr int BOTTOM_EDGE = 400;

  Ball *ball;
  Paddle *paddle;
  Brick *bricks[N_OF_BRICKS];

  bool gameOver;
  bool gameWin;
  bool gameStarted;
  bool paused;

 signals:
};

#endif  // BREAKOUT_H
