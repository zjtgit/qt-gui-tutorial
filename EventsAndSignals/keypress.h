#ifndef KEYPRESS_H
#define KEYPRESS_H

#include <QWidget>
#include <QKeyEvent>
#include <QApplication>

class KeyPress : public QWidget
{
    Q_OBJECT
public:
    explicit KeyPress(QWidget *parent = nullptr);

protected:
    void keyPressEvent(QKeyEvent *event);
signals:

};

#endif // KEYPRESS_H
