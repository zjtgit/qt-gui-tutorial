
#include "checkbox.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  //  Click w;
  Checkbox w;
  w.resize(250, 150);
  w.setWindowTitle("checkbox test");

  w.show();
  return a.exec();
}
