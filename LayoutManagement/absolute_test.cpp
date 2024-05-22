#include "absolute.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  absolute w;
  w.setWindowTitle("absolute");

  w.show();
  return a.exec();
}
