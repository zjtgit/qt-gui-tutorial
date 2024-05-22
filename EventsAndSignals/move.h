#ifndef MOVE_H
#define MOVE_H

#include <QWidget>
#include <QMainWindow>
#include <QMoveEvent>
#include <QString>

class Move : public QWidget
{
    Q_OBJECT
public:
    explicit Move(QWidget *parent = nullptr);
protected:
    void moveEvent(QMoveEvent *event);
signals:

};

#endif // MOVE_H
