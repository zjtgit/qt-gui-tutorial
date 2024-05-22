#ifndef DISCONNECT_H
#define DISCONNECT_H

#include <QCheckBox>
#include <QHBoxLayout>
#include <QPushButton>
#include <QTextStream>
#include <QWidget>

class Disconnect : public QWidget {
  Q_OBJECT
 public:
  explicit Disconnect(QWidget *parent = nullptr);

 private slots:
  void onClick();
  void onCheck(int state);

 private:
  QPushButton *clickBtn;
 signals:
};

#endif  // DISCONNECT_H
