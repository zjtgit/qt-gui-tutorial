
#include <QApplication>

#include "application.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  Application w;
  w.resize(370, 200);
  w.setWindowTitle("application test");

  w.show();
  return a.exec();
}
