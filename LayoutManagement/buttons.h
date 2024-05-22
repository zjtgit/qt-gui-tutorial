#ifndef BUTTONS_H
#define BUTTONS_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

class Buttons : public QWidget {
  Q_OBJECT
 public:
  explicit Buttons(QWidget *parent = nullptr);

 private:
    QPushButton *okBtn;
    QPushButton *applyBtn;

 signals:
};

#endif  // BUTTONS_H
