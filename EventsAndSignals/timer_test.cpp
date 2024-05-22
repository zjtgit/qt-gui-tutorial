#include "timer.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  //  Click w;
  Timer w;
  w.resize(250, 150);
  w.setWindowTitle("timer");

  w.show();
  return a.exec();
}
