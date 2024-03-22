#ifndef TRACKER_H
#define TRACKER_H

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
    QString getUrl() { return url; }
    //QString setUrl(const QString &str) { url = str; } //положит код
    ~Tracker() { std::cout << "Tracker deleted" << std::endl; delete qfsw; delete qf; }
public slots:
    void isChanged();
   // void Exists();
};
#endif // TRACKER_H
