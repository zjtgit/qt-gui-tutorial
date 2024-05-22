#ifndef SPINBOX_H
#define SPINBOX_H

#include <QHBoxLayout>
#include <QLabel>
#include <QSpinBox>
#include <QWidget>

class Spinbox : public QWidget {
  Q_OBJECT
 public:
  explicit Spinbox(QWidget *parent = nullptr);

 private:
  QSpinBox *spinbox;

 signals:
};

#endif  // SPINBOX_H
