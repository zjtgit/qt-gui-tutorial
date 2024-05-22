#include "review.h"

#include <QApplication>
int main(int argc, char** argv) {
  QApplication a(argc, argv);
  Review w;
  w.resize(240, 230);
  w.setWindowTitle("verticalbox");

  w.show();
  return a.exec();
  //  return 0;
}
