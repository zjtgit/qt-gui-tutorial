#ifndef TABLE_H
#define TABLE_H

#include <QHBoxLayout>
#include <QTableWidget>
#include <QWidget>

class Table : public QWidget {
  Q_OBJECT
 public:
  explicit Table(QWidget *parent = nullptr);

 signals:
};

#endif  // TABLE_H
