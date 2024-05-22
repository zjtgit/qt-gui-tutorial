#ifndef PUFF_H
#define PUFF_H

#include <QWidget>
#include <QTimer>
#include <QTextStream>
#include <QPainter>
#include <QString>

class Puff : public QWidget
{
    Q_OBJECT
public:
    explicit Puff(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);
private:
    int x;
    qreal opacity;
    int timerId;

    void doPainting();

signals:

};

#endif // PUFF_H
