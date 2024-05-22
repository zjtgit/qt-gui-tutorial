#ifndef SPLITTER_H
#define SPLITTER_H

#include <QWidget>

#include <QHBoxLayout>
#include <QSplitter>
#include <QFrame>
#include <QList>
class Splitter : public QWidget
{
    Q_OBJECT
public:
    explicit Splitter(QWidget *parent = nullptr);

signals:

};

#endif // SPLITTER_H
