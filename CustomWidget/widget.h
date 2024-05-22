#ifndef WIDGET_H
#define WIDGET_H

#include <QFrame>
#include <QPainter>
#include <QString>
#include <QWidget>
#include <QtGui>

class Widget : public QFrame {
  Q_OBJECT
 public:
  Widget(QWidget *parent = nullptr);

 public slots:
  void setValue(int value);

 protected:
  void paintEvent(QPaintEvent *event);
  void drawWidget(QPainter &qp);

 private:
  int cur_width;
  static constexpr int DISTANCE = 19;
  static constexpr int LINE_WIDTH = 5;
  static constexpr int DIVISIONS = 10;
  static constexpr float FULL_CAPACITY = 700;
  static constexpr float MAX_CAPACITY = 750;
};

#endif  // WIDGET_H
