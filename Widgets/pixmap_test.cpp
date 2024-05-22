//#include "progressbar.h"
#include "pixmap.h"
#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  //  Click w;
  Pixmap w;
  w.resize(250, 150);
  w.setWindowTitle("pixmap test");

  w.show();
  return a.exec();
}
