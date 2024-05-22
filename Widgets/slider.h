#ifndef SLIDER_H
#define SLIDER_H
#include <QLabel>
#include <QSlider>
#include <QWidget>
#include <QHBoxLayout>
class Slider : public QWidget {
  Q_OBJECT
 public:
  explicit Slider(QWidget *parent = nullptr);
private slots:
    void setLabelValue();
 private:
  QSlider *slider;
  QLabel *label;
 signals:
};

#endif  // SLIDER_H
