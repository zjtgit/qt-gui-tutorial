#include <QString>
#include <QTextStream>
#include <iostream>
#include <string>

int main(int argc, char** argv) {
  QTextStream out(stdout);
  QString str = "abc defg";

  out << str[0] << endl;
  out << str[4] << endl;

  out << str.at(0) << endl;

  out << str.length() << endl;
  out << str.size() << endl;

  // assert error
  if (str.at(7).isNull()) {
    out << "outside the range of the string" << endl;
  }

  return 0;
}
