#ifndef FORMEX_H
#define FORMEX_H

#include <QWidget>
#include <QFormLayout>
#include <QLabel>
#include <QLineEdit>
#include <QString>
#include <iostream>
class FormEx : public QWidget
{
    Q_OBJECT
public:
    explicit FormEx(QWidget *parent = nullptr);

signals:

private:
    QLineEdit* nameEdit;
    QLineEdit* addrEdit;
    QLineEdit* occpEdit;
};

#endif // FORMEX_H
