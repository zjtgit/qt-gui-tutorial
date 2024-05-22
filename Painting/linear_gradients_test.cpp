#include "linear_gradients.h"

#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  LinearGradients w;
  w.resize(350, 280);
  w.setWindowTitle("Linear gradient test");

  w.show();
  return a.exec();
}
