#include "Tracker.h"

Tracker::Tracker(QString str, QObject *parent):QObject(parent)
{
    std::cout << "Tracker created" << std::endl;
    url = str;
    qf = new QFile(str);
    qfsw = new QFileSystemWatcher(this);
    qfsw->addPath(url);
}
