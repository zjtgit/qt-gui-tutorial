#include "colours.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  //  Click w;
  Colours w;
  w.resize(360, 280);
  w.setWindowTitle("Colours test");

  w.show();
  return a.exec();
}
