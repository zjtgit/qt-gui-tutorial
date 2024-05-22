#ifndef PIXMAP_H
#define PIXMAP_H

#include <QWidget>
#include <QPixmap>
#include <QHBoxLayout>
#include <QLabel>

class Pixmap : public QWidget
{
    Q_OBJECT
public:
    explicit Pixmap(QWidget *parent = nullptr);

signals:

};

#endif // PIXMAP_H
