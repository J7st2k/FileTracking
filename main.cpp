#include "Tracker.h"
#include <QTextStream>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    // QTextStream cout(stdout);
    // QTextStream cin(stdout);
    // QString str;
    // cout << "Enter file name:" << endl;
    // str = cin.readLine();
    // cout << "file name:" << str << endl;

    QString str = "text.txt";
    Tracker A(str);
    return 0;
    //return app.exec();
}
