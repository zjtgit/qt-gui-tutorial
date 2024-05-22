#include "slider.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  //  Click w;
  Slider w;
  w.resize(250, 150);
  w.setWindowTitle("Slider");

  w.show();
  return a.exec();
}
