#include <QString>
#include <QTextStream>
#include <iostream>
#include <string>

int main(int argc, char** argv) {
  QTextStream out(stdout);
  QString str1 = "The night train.";

  for (QChar c : str1) {
    out << c << " ";
  }

  out << endl;

  //  out << str2 << endl;
  QString str2("The big apple.");

  for (QChar* iter = str2.begin(); iter != str2.end(); ++iter) {
    out << *iter << " ";
  }

  out << endl;

  for (int i = 0; i < str1.size(); ++i) {
    out << str1.at(i) << " ";
  }
  out << endl;

  out << str2 << endl;

  return 0;
}
