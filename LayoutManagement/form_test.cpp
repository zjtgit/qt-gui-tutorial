//#include "nesting.h"
#include "form.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  FormEx w;
  //  w.resize(290, 170);
  w.setWindowTitle("form example");

  w.show();
  return a.exec();
}
