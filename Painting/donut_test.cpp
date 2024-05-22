#include "donut.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  Donut w;
  w.resize(350, 280);
  w.setWindowTitle("Donut test");

  w.show();
  return a.exec();
}
