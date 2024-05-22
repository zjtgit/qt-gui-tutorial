#include "pixmap.h"

Pixmap::Pixmap(QWidget *parent) : QWidget{parent} {
  QHBoxLayout *hbox = new QHBoxLayout(this);

  QPixmap pixmap("/home/zjt/backup/zhihu/MathPic1.ppm");
  pixmap.setDevicePixelRatio(100);

  QLabel *label = new QLabel(this);
  label->setPixmap(pixmap);

  hbox->addWidget(label, 0, Qt::AlignTop);
}
