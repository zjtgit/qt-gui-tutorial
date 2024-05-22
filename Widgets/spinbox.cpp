#include "spinbox.h"

Spinbox::Spinbox(QWidget *parent) : QWidget{parent} {
  auto *hbox = new QHBoxLayout(this);
  hbox->setSpacing(15);

  spinbox = new QSpinBox(this);
  spinbox->setMinimum(-9999);
  spinbox->setMaximum(9999);
  auto *lbl = new QLabel("0", this);

  hbox->addWidget(spinbox);
  hbox->addWidget(lbl);

  connect(spinbox,
          static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged), lbl,
          static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
}
