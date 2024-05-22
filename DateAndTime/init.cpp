#include <QDate>
#include <QDateTime>
#include <QList>
#include <QTextStream>
#include <QTime>

int main(void) {
  QTextStream out(stdout);

  QDate dt1{2020, 4, 12};
  out << "The date is " << dt1.toString() << endl;

  QDate dt2;
  dt2.setDate(2020, 3, 3);
  out << "The date is " << dt2.toString() << endl;

  QTime tm1{17, 30, 12, 55};
  out << "The time is " << tm1.toString("hh:mm:ss.zzz") << endl;

  QTime tm2;
  tm2.setHMS(13, 52, 45, 155);
  out << "The time is " << tm2.toString("hh:mm:ss.zzz") << endl;

  QDate cd = QDate::currentDate();
  QTime ct = QTime::currentTime();

  out << "Current date: " << cd.toString() << endl;
  out << "Current time: " << ct.toString() << endl;

  QList<int> years({2010, 2011, 2012, 2013, 2014, 2015, 2016, 2020, 2024});

  for (int year : years) {
    if (QDate::isLeapYear(year)) {
      out << year << QString("是 闰年").toUtf8() << endl;
    } else {
      out << year << QString("不是闰年").toUtf8() << endl;
    }
  }

  out << "Today is " << cd.toString(Qt::TextDate) << endl;
  out << "Today is " << cd.toString(Qt::ISODate) << endl;
  out << "Today is " << cd.toString(Qt::SystemLocaleShortDate) << endl;
  out << "Today is " << cd.toString(Qt::SystemLocaleLongDate) << endl;
  out << "Today is " << cd.toString(Qt::DefaultLocaleShortDate) << endl;
  out << "Today is " << cd.toString(Qt::DefaultLocaleLongDate) << endl;
  out << "Today is " << cd.toString(Qt::SystemLocaleDate) << endl;
  out << "Today is " << cd.toString(Qt::LocaleDate) << endl;

  out << "Today is " << cd.toString("yyyy-MM-dd") << endl;
  out << "Today is " << cd.toString("yy/M/dd") << endl;
  out << "Today is " << cd.toString("d. M. yyyy") << endl;
  out << "Today is " << cd.toString("d-MMMM-yyyy") << endl;

  out << "The time is " << ct.toString(Qt::TextDate) << endl;
  out << "The time is " << ct.toString(Qt::ISODate) << endl;
  out << "The time is " << ct.toString(Qt::SystemLocaleShortDate) << endl;
  out << "The time is " << ct.toString(Qt::SystemLocaleLongDate) << endl;
  out << "The time is " << ct.toString(Qt::DefaultLocaleShortDate) << endl;
  out << "The time is " << ct.toString(Qt::DefaultLocaleLongDate) << endl;
  out << "The time is " << ct.toString(Qt::SystemLocaleDate) << endl;
  out << "The time is " << ct.toString(Qt::LocaleDate) << endl;

  out << "The time is " << ct.toString("hh:mm:ss.zzz") << endl;
  out << "The time is " << ct.toString("h:m:s a") << endl;
  out << "The time is " << ct.toString("H:m:s A") << endl;
  out << "The time is " << ct.toString("h:m AP") << endl;

  int wd = cd.dayOfWeek();

  QLocale locale(QLocale("en_US"));
  //  QLocale locale(QLocale("zh_CN"));

  out << "Today is " << locale.dayName(wd) << endl;
  out << "Today is " << locale.dayName(wd, QLocale::ShortFormat) << endl;

  QDateTime cdt = QDateTime::currentDateTime();

  out << "The current datetime is " << cdt.toString() << endl;
  out << "The current date is " << cdt.date().toString() << endl;
  out << "The current time is " << cdt.time().toString() << endl;

  out << "Universal datetime: " << cdt.toUTC().toString() << endl;
  out << "Local datetime: " << cdt.toLocalTime().toString() << endl;
  out << "Local datetime: " << cdt.toTime_t() << endl;
}
