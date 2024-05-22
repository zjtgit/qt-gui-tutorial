#ifndef COLOURS_H
#define COLOURS_H

#include <QPainter>
#include <QWidget>

class Colours : public QWidget {
  Q_OBJECT
 public:
  explicit Colours(QWidget *parent = nullptr);

 protected:
  void paintEvent(QPaintEvent *event);

 private:
  void doPainting();
 signals:
};

#endif  // COLOURS_H
