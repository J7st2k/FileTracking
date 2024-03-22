#include "Tracker.h"
#include <QTextStream>
QTextStream cout(stdout);
QTextStream cin(stdout);
// QString str;
// cout << "Enter file name:" << endl;
// str = cin.readLine();
// cout << "file name:" << str << endl;

Tracker::Tracker(QString str, QObject *parent):QObject(parent)
{
    url = str;
    qf = new QFile(str);
    qfsw = new QFileSystemWatcher(this);
    qfsw->addPath(url);

    QObject::connect(qfsw, &QFileSystemWatcher::fileChanged, this, &Tracker::isChanged);

    logger->log("Tracker created");
}

void Tracker::setUrl(const QString &str)
{
    delete qf;
    qf = new QFile(str);
    qfsw->removePath(url);
    qfsw->addPath(str);
    url = str;
}

void Tracker::isChanged()
{
    logger->signalLog(url, qf->exists(), qf->size());
}

