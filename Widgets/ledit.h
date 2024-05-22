#ifndef LEDIT_H
#define LEDIT_H

#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>

class Ledit : public QWidget
{
    Q_OBJECT
public:
    explicit Ledit(QWidget *parent = nullptr);

signals:

};

#endif // LEDIT_H
