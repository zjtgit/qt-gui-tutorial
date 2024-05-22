#include "form.h"

FormEx::FormEx(QWidget *parent) : QWidget{parent} {
  nameEdit = new QLineEdit(this);
  addrEdit = new QLineEdit(this);
  occpEdit = new QLineEdit(this);

  auto *formLayout = new QFormLayout();

  formLayout->setLabelAlignment(Qt::AlignRight | Qt::AlignVCenter);

  formLayout->addRow("Name", nameEdit);
  formLayout->addRow("Email", addrEdit);
  formLayout->addRow("Age", occpEdit);

  setLayout(formLayout);

  //  nameEdit->text();
}
