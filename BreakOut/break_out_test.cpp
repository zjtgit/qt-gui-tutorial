#include <QApplication>

#include "breakout.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  Breakout w;
  w.resize(300, 400);
  w.setWindowTitle("breakout test");

  w.show();
  return a.exec();
}
