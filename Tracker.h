#ifndef TRACKER_H
#define TRACKER_H

#include "Ilog.h"
#include <QFileSystemWatcher>
#include <QString>
#include <QFile>

class Tracker : public QObject
{
    Q_OBJECT

protected:
    Ilog *logger;
    QString url;
    QFileSystemWatcher *qfsw;
    QFile *qf;

public:
    Tracker(QString str, QObject *parent = 0);
    ~Tracker() { delete qfsw; delete qf; logger->log("Tracker deleted"); delete logger; }

    QString getUrl() { return url; }
    void setUrl(const QString &str);

    void setIlog(Ilog *l) { if(l != NULL) logger = l; }

public slots:
    void isChanged();
   // void Exists();
};
#endif // TRACKER_H
