#ifndef LINES_H
#define LINES_H

#include <QWidget>
#include <QPainter>
#include <QVector>
class Lines : public QWidget {
  Q_OBJECT
 public:
  explicit Lines(QWidget *parent = nullptr);

 protected:
  void paintEvent(QPaintEvent *event);
  void drawLines(QPainter *qp);

 signals:
};

#endif  // LINES_H
