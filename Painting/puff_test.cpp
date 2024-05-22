#include "puff.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  Puff w;
  w.resize(350, 280);
  w.setWindowTitle("puff test");

  w.show();
  return a.exec();
}
