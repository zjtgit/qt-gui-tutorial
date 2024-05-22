#ifndef STATUSBAR_H
#define STATUSBAR_H

//#include <QWidget>
#include <QMainWindow>
#include <QPushButton>
#include <QFrame>
#include <QHBoxLayout>
#include <QStatusBar>
#include <QLabel>

class Statusbar : public QMainWindow {
  Q_OBJECT
 public:
  explicit Statusbar(QWidget *parent = nullptr);
private slots:
    void OnOkPressed();
    void OnApplyPressed();

private:
    QPushButton *okBtn;
    QPushButton *aplBtn;
 signals:
};

#endif  // STATUSBAR_H
