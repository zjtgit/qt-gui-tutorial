#include "listwidget.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  //  Click w;
  ListWidget w;
  w.resize(250, 150);
  w.setWindowTitle("list widget test");

  w.show();
  return a.exec();
}
