#include "lines.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  //  Click w;
  Lines w;
  w.resize(280, 270);
  w.setWindowTitle("Line test");

  w.show();
  return a.exec();
}
