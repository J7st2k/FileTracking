#include "Tracker.h"
#include <chrono>
#include <QCoreApplication>
#include <thread>
#include <QTextStream>


int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    QTextStream cout(stdout);
    QTextStream cin(stdin);

    ConsoleLog l;
    cout << "Enter file name: " << Qt::endl;
    QString str;
    cin >> str;
    //Tracker A(str);
    cout << "File name: " << str << Qt::endl;
    //std::this_thread::sleep_for( std::chrono::milliseconds( 100 ) );
    return app.exec();
}
