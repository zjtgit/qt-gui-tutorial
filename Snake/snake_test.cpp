#include "snake.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  Snake w;
  //  w.resize(370, 200);
  w.setWindowTitle("snake test");

  w.show();
  return a.exec();
}
