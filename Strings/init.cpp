#include <QString>
#include <QTextStream>
#include <iostream>
#include <string>

int main(int argc, char** argv) {
  QTextStream out(stdout);
  QString str1 = "aaa";
  out << str1 << endl;

  QString str2("bbb");
  out << str2 << endl;

  QString str3{"ccc"};
  out << str3 << endl;

  std::string s1 = "ddd";
  QString str4 = s1.c_str();
  out << str4 << endl;

  std::string s2 = "eee";
  QString str5 = QString::fromLatin1(s2.data(), s2.size());
  out << str5 << endl;

  char s3[] = "fff";
  QString str6(s3);
  out << str6 << endl;

  return 0;
}
