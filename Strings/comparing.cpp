#include <QString>
#include <QTextStream>
#include <iostream>
#include <string>
#define STR_EQUAL 0

int main(int argc, char** argv) {
  QTextStream out(stdout);

  //  out.setCodec("GBK");

  out.setCodec("UTF-8");

  //  out.setCodec("GB18030");
  //  out.setEncoding(QStringConverter::System);

  QString a = "Rain";
  QString b = "rain";
  QString c = "rain\n";

  if (QString::compare(a, b) == STR_EQUAL) {
    out << "a ,b are equal" << endl;

  } else {
    out << "a ,b are not equal" << endl;
  }

  out << "In case insensitive comparision: " << endl;
  out << QString("不区分大小写").toUtf8() << endl;

  if (QString::compare(a, b, Qt::CaseInsensitive) == STR_EQUAL) {
    out << "a ,b are equal" << endl;
  } else {
    out << "a ,b are not equal" << endl;
  }

  if (QString::compare(b, c) == STR_EQUAL) {
    out << "c ,b are equal" << endl;

  } else {
    out << "c ,b are not equal" << endl;
  }

  return 0;
}
