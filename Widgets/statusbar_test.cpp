
#include "statusbar.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  //  Click w;
  Statusbar w;
  w.resize(250, 150);
  w.setWindowTitle("QStatusbar edit");

  w.show();
  return a.exec();
}
