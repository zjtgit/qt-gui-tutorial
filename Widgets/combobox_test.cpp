#include "combobox.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  //  Click w;
  Combobox w;
  w.resize(250, 150);
  w.setWindowTitle("Combobox");

  w.show();
  return a.exec();
}
