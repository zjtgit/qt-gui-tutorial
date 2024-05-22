#include "combobox.h"

Combobox::Combobox(QWidget *parent) : QWidget{parent} {
  QStringList distros = {"Arch", "Xubuntu", "Redhat", "Debian", "Mandriva"};

  auto *hbox = new QHBoxLayout(this);

  combo = new QComboBox();
  combo->addItems(distros);

  hbox->addWidget(combo);
  hbox->addSpacing(15);

  label = new QLabel("Arch", this);
  hbox->addWidget(label);
  // static_cast<void (QLabel::*)(int)>
  connect(combo, &QComboBox::textActivated, this, &Combobox::setLabelValue);
}

void Combobox::setLabelValue() { label->setText(combo->currentText()); }
