#ifndef LISTWIDGET_H
#define LISTWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QListWidget>
#include <QVBoxLayout>
#include <QInputDialog>
#include <QHBoxLayout>
#include <QString>

class ListWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ListWidget(QWidget *parent = nullptr);

private slots:
    void addItem();
    void renameItem();
    void removeItem();
    void clearItems();

private:
    QListWidget *lw;
    QPushButton *add;
    QPushButton *remove;
    QPushButton *rename;
    QPushButton *remove_all;

signals:

};

#endif // LISTWIDGET_H
