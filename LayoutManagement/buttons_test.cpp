#include "buttons.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  Buttons w;
  w.resize(290, 170);
  w.setWindowTitle("buttons");

  w.show();
  return a.exec();
}
