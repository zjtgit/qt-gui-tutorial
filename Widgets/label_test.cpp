#include "label.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  //  Click w;
  Label w;
  w.resize(250, 150);
  w.setWindowTitle("QLabel");

  w.show();
  return a.exec();
}
