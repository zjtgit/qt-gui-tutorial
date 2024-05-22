#ifndef CHECKBOX_H
#define CHECKBOX_H

#include <QWidget>
#include <QCheckBox>
#include <QHBoxLayout>

class Checkbox : public QWidget
{
    Q_OBJECT
public:
    explicit Checkbox(QWidget *parent = nullptr);

private slots:
    void showTitle(int state);

signals:

};

#endif // CHECKBOX_H
