#include "statusbar.h"

Statusbar::Statusbar(QWidget *parent) : QMainWindow{parent} {
  auto *frame = new QFrame(this);
  setCentralWidget(frame);

  auto *hbox = new QHBoxLayout(frame);

  okBtn = new QPushButton("ok", frame);
  hbox->addWidget(okBtn, 0, Qt::AlignLeading | Qt::AlignTop);

  aplBtn = new QPushButton("Apply", frame);
  hbox->addWidget(aplBtn, 1, Qt::AlignLeading | Qt::AlignTop);

  statusBar();

  connect(okBtn, &QPushButton::clicked, this, &Statusbar::OnOkPressed);
  connect(aplBtn, &QPushButton::clicked, this, &Statusbar::OnApplyPressed);
}

void Statusbar::OnOkPressed() {
  statusBar()->showMessage("Ok button pressed", 2000);
}

void Statusbar::OnApplyPressed() {
  statusBar()->showMessage("Apply button pressed", 2000);
}
