#ifndef ILOG_H
#define ILOG_H
#include <QTextStream>

class Ilog
{
public:
    virtual void log(const QString &str) const = 0;
    virtual void signalLog(const QString &str, const bool &ex, qint64 size) const = 0;
};

class ConsoleLog : public Ilog
{
public:
    void log(const QString &str) const override
    {
        QTextStream cout(stdout);
        cout << str << Qt::endl;
    }

    void signalLog(const QString &str, const bool &ex, qint64 size = 0ll) const override
    {
        QTextStream cout(stdout);

        if (ex) cout << "File " << str << " changed. Current size: " << size << " bit." << Qt::endl;
        else cout << "File " << str << " deleted" << Qt::endl;
    }
};

#endif // ILOG_H
