#include "splitter.h"
#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  //  Click w;
  Splitter w;
  w.resize(250, 150);
  w.setWindowTitle("Splitter test");

  w.show();
  return a.exec();
}
