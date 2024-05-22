#include "progressbar.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  //  Click w;
  ProgressBarEx w;
  w.resize(250, 150);
  w.setWindowTitle("progressbar test");

  w.show();
  return a.exec();
}
