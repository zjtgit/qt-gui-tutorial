//#include "nesting.h"
//#include "form.h"
#include "calculator.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  Calculator w;
  //  w.resize(640, 480);
  w.setWindowTitle("calculator");

  w.show();
  return a.exec();
}
