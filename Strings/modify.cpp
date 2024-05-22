#include <QTextStream>

int main(void) {
  QTextStream out(stdout);

  QString str{"Lovely"};
  str.append(" season");

  out << str << endl;

  str.remove(10, 3);
  out << str << endl;

  // 7 8 9位置的字符换成girl
  str.replace(7, 3, "girl");
  out << str << endl;

  str.clear();

  if (str.isEmpty()) {
    out << "The string is empty" << endl;
  }

  return 0;
}
