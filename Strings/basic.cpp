#include <QString>
#include <QTextStream>

int main(int argc, char** argv) {
  QTextStream out(stdout);
  QString a{"love"};

  a.append(" chess");
  a.prepend("I ");
  out << a << endl;

  return 0;
}
