#ifndef PATTERNS_H
#define PATTERNS_H

#include <QApplication>
#include <QPainter>
#include <QWidget>

class Patterns : public QWidget {
  Q_OBJECT
 public:
  explicit Patterns(QWidget *parent = nullptr);

 protected:
  void paintEvent(QPaintEvent *event);

 private:
  void doPainting();
 signals:
};

#endif  // PATTERNS_H
