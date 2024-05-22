#ifndef LABEL_H
#define LABEL_H

#include <QWidget>
#include <QLabel>
#include <QFont>
#include <QVBoxLayout>
#include <QString>

class Label : public QWidget
{
    Q_OBJECT
public:
    explicit Label(QWidget *parent = nullptr);
private:
    QLabel *label;
signals:

};

#endif // LABEL_H
