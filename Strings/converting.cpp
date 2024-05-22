#include <QString>
#include <QTextStream>
#include <iostream>
#include <string>
#define STR_EQUAL 0

int main(int argc, char** argv) {
  QTextStream out(stdout);

  //  out.setCodec("GBK");

  //  out.setCodec("UTF-8");

  //  out.setCodec("GB18030");
  //  out.setEncoding(QStringConverter::System);

  QString a = "12";
  QString b = "15";
  QString c, d;

  out << a.toInt() + b.toInt() << endl;

  int n1 = 30;
  int n2 = 40;
  out << c.setNum(n1) + d.setNum(n2) << endl;

  return 0;
}
