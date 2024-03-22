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

    cout << "Tracker created" << Qt::endl;
}

void Tracker::isChanged()
{
    if (qf->exists()) cout << "File" << url << "changed.";
    else cout << "File" << url << "deleted";
}

