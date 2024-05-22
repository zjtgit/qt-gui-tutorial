#include "breakout.h"

Breakout::Breakout(QWidget *parent) : QWidget{parent} {
  x = 0;
  gameOver = false;
  gameWin = false;
  gameStarted = false;
  paused = false;

  ball = new Ball();
  paddle = new Paddle();

  int k = 0;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 6; j++) {
      bricks[k] = new Brick(j * 40 + 30, i * 10 + 50);
      k++;
    }
  }
}

Breakout::~Breakout() {
  delete ball;
  delete paddle;

  for (int i = 0; i < N_OF_BRICKS; i++) {
    delete bricks[i];
  }
}

void Breakout::paintEvent(QPaintEvent *event) {
  Q_UNUSED(event);
  QPainter painter(this);

  if (gameOver) {
    finishGame(&painter, "Game lost");
  } else if (gameWin) {
    finishGame(&painter, "Victory");
  } else {
    drawObjects(&painter);
  }
}

void Breakout::finishGame(QPainter *painter, QString message) {
  QFont font("Courier", 15, QFont::DemiBold);
  QFontMetrics fm(font);
  int textWidth = fm.width(message);

  painter->setFont(font);
  int h = height();
  int w = width();

  painter->translate(QPoint(w / 2, h / 2));
  painter->drawText(-textWidth / 2, 0, message);
}

void Breakout::drawObjects(QPainter *painter) {
  painter->drawImage(ball->getRect(), ball->getImage());
  painter->drawImage(paddle->getRect(), paddle->getImage());

  for (int i = 0; i < N_OF_BRICKS; i++) {
    if (!bricks[i]->isDestoryed()) {
      painter->drawImage(bricks[i]->getRect(), bricks[i]->getImage());
    }
  }
}

void Breakout::timerEvent(QTimerEvent *event) {
  Q_UNUSED(event);

  moveObjects();
  checkCollision();
  repaint();
}

void Breakout::moveObjects() {
  ball->autoMove();
  paddle->move();
}

void Breakout::keyReleaseEvent(QKeyEvent *event) {
  int dx = 0;
  switch (event->key()) {
    case Qt::Key_Left: {
      dx = 0;
      paddle->setDx(dx);
      break;
    }
    case Qt::Key_Right: {
      dx = 0;
      paddle->setDx(dx);
      break;
    }
  }
}

void Breakout::keyPressEvent(QKeyEvent *event) {
  int dx = 0;
  switch (event->key()) {
    case Qt::Key_Left: {
      dx = -1;
      paddle->setDx(dx);
      break;
    }
    case Qt::Key_Right: {
      dx = 1;
      paddle->setDx(dx);
      break;
    }
    case Qt::Key_P: {
      pauseGame();
      break;
    }
    case Qt::Key_Space: {
      startGame();
      break;
    }
    case Qt::Key_Escape: {
      qApp->exit();
      break;
    }
    default:
      //      break;
      QWidget::keyPressEvent(event);
  }
}

void Breakout::startGame() {
  if (!gameStarted) {
    ball->resetState();
    paddle->resetState();
    for (int i = 0; i < N_OF_BRICKS; i++) {
      bricks[i]->setDestoryed(false);
    }

    gameOver = false;
    gameWin = false;
    gameStarted = true;
    timerId = startTimer(DELAY);
  }
}

void Breakout::pauseGame() {
  if (paused) {
    timerId = startTimer(DELAY);
    paused = false;
  } else {
    paused = true;
    killTimer(timerId);
  }
}

void Breakout::stopGame() {
  killTimer(timerId);
  gameOver = true;
  gameStarted = false;
}

void Breakout::victory() {
  killTimer(timerId);
  gameWin = true;
  gameStarted = false;
}

void Breakout::checkCollision() {
  if (ball->getRect().bottom() > BOTTOM_EDGE) {
    stopGame();
  }

  for (int i = 0, j = 0; i < N_OF_BRICKS; i++) {
    if (bricks[i]->isDestoryed()) {
      j++;
    }
    if (j == N_OF_BRICKS) {
      victory();
    }
  }

  if (ball->getRect().intersects(paddle->getRect())) {
    int paddleLpos = paddle->getRect().left();
    int ballLpos = ball->getRect().left();

    int first = paddleLpos + 8;
    int second = paddleLpos + 16;
    int third = paddleLpos + 24;
    int fourth = paddleLpos + 32;

    if (ballLpos < first) {
      ball->setXDir(-1);
      ball->setYDir(-1);
    }

    if (ballLpos >= first && ballLpos < second) {
      ball->setXDir(-1);
      ball->setYDir(-1 * ball->getYDir());
    }

    if (ballLpos >= second && ballLpos < third) {
      ball->setXDir(0);
      ball->setYDir(-1);
    }
    if (ballLpos >= third && ballLpos < fourth) {
      ball->setXDir(1);
      ball->setYDir(-1 * ball->getYDir());
    }

    if (ballLpos > fourth) {
      ball->setXDir(1);
      ball->setYDir(-1);
    }
  }

  for (int i = 0; i < N_OF_BRICKS; i++) {
    if (ball->getRect().intersects(bricks[i]->getRect())) {
      int ballLeft = ball->getRect().left();
      int ballHeight = ball->getRect().height();
      int ballWidth = ball->getRect().width();
      int ballTop = ball->getRect().top();

      QPoint pointRight(ballLeft + ballWidth + 1, ballTop);
      QPoint pointLeft(ballLeft - 1, ballTop);
      QPoint pointTop(ballLeft, ballTop - 1);
      QPoint pointBottom(ballLeft, ballTop + ballHeight + 1);

      if (!bricks[i]->isDestoryed()) {
        if (bricks[i]->getRect().contains(pointRight)) {
          ball->setXDir(-1);
        } else if (bricks[i]->getRect().contains(pointLeft)) {
          ball->setXDir(1);
        }
        if (bricks[i]->getRect().contains(pointTop)) {
          ball->setYDir(1);
        } else if (bricks[i]->getRect().contains(pointBottom)) {
          ball->setYDir(-1);
        }
        bricks[i]->setDestoryed(true);
      }
    }
  }
}
