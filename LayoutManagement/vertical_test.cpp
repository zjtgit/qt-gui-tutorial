#include <QApplication>

//#include "absolute.h"
#include "vertical_box.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  VerticalBox w;
  w.resize(240, 230);
  w.setWindowTitle("verticalbox");

  w.show();
  return a.exec();
}
