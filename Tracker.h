#ifndef TRACKER_H
#define TRACKER_H

#include <QCoreApplication>
#include <QFileSystemWatcher>
#include <QString>
#include <QFile>
#include <iostream>

class Tracker : public QObject
{
    Q_OBJECT
protected:
    QString url;
    QFileSystemWatcher *qfsw;
    QFile *qf;
public:
    Tracker(QString str, QObject *parent = 0);
    ~Tracker() { std::cout << "Tracker deleted" << std::endl; delete qfsw; }
public slots:
   // void isChanged();
   // void Exists();
};
#endif // TRACKER_H
