#include "spinbox.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  //  Click w;
  Spinbox w;
  w.resize(250, 150);
  w.setWindowTitle("SpinBox");

  w.show();
  return a.exec();
}
