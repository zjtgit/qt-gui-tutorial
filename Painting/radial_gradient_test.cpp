#include "radial_gradient.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  RadialGradient w;
  w.resize(350, 280);
  w.setWindowTitle("radial_gradient test");

  w.show();
  return a.exec();
}
