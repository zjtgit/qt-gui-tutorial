#ifndef LINEARGRADIENTS_H
#define LINEARGRADIENTS_H

#include <QApplication>
#include <QPainter>
#include <QWidget>

class LinearGradients : public QWidget {
  Q_OBJECT
 public:
  explicit LinearGradients(QWidget *parent = nullptr);

 protected:
  void paintEvent(QPaintEvent *event);

 private:
  void doPainting();

 signals:
};

#endif  // LINEARGRADIENTS_H
