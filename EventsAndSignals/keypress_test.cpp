//#include "absolute.h"
//#include "click.h"
#include "keypress.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  //  Click w;
  KeyPress w;
  w.resize(250, 150);
  w.setWindowTitle("key press");

  w.show();
  return a.exec();
}
