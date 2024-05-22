#include "absolute.h"

absolute::absolute(QWidget *parent) : QWidget(parent) {
  auto *ledit = new QTextEdit(this);
  ledit->setGeometry(5, 5, 200, 150);
}

absolute::~absolute() {}
