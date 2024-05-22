//#include "keypress.h"

//#include "move.h"
#include "disconnect.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  //  Click w;
  Disconnect w;
  w.resize(250, 150);
  w.setWindowTitle("move");

  w.show();
  return a.exec();
}
