#include <QString>
#include <QTextStream>
#include <iostream>
#include <string>

int main(int argc, char** argv) {
  QTextStream out(stdout);
  QString str1 = "aaa %1  %2 faffa";
  out << str1.arg(10.1234).arg(111) << endl;

  return 0;
}
