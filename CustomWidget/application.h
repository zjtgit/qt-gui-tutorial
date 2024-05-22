#ifndef APPLICATION_H
#define APPLICATION_H

#include <QFrame>
#include <QHBoxLayout>
#include <QLabel>
#include <QSlider>
#include <QVBoxLayout>
#include <QWidget>

#include "widget.h"

class Application : public QFrame {
  Q_OBJECT
 public:
  Application(QWidget *parent = nullptr);

 private:
  QSlider *slider;
  Widget *widget;
  QLabel *lbl;
  void initUI();

public slots:
  void setValue(int value);
};

#endif  // APPLICATION_H
