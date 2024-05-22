//#include "buttons.h"
#include "nesting.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  Layouts w;
  //  w.resize(290, 170);
  w.setWindowTitle("nestings");

  w.show();
  return a.exec();
}
