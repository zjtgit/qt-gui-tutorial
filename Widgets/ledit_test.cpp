#include "ledit.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  //  Click w;
  Ledit w;
  w.resize(250, 150);
  w.setWindowTitle("Qlane edit");

  w.show();
  return a.exec();
}
