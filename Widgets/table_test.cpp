//#include "splitter.h"
#include "table.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  //  Click w;
  Table w;
  w.resize(250, 150);
  w.setWindowTitle("Table test");

  w.show();
  return a.exec();
}
