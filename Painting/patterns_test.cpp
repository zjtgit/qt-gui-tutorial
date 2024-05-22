#include "patterns.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  Patterns w;
  w.resize(360, 500);
  w.setWindowTitle("Patterns test");

  w.show();
  return a.exec();
}
