#ifndef COMBOBOX_H
#define COMBOBOX_H

#include <QWidget>
#include <QComboBox>
#include <QLabel>
#include <QHBoxLayout>
#include <QStringList>
#include <QString>
class Combobox : public QWidget
{
    Q_OBJECT
public:
    explicit Combobox(QWidget *parent = nullptr);
private:
    QComboBox *combo;
    QLabel *label;

protected slots:
    void setLabelValue();
signals:

};

#endif // COMBOBOX_H
