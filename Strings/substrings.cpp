#include <QString>
#include <QTextStream>
#include <iostream>
#include <string>

int main(int argc, char** argv) {
  QTextStream out(stdout);
  QString str1 = "The night train.";

  out << str1.right(5) << endl;
  out << str1.left(5) << endl;
  out << str1.mid(4, 5) << endl;

  //  out << str2 << endl;
  QString str2("The big apple.");
  QStringRef sub(&str2, 0, 3);

  out << sub.toString() << endl;

  return 0;
}
