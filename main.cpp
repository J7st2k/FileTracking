#include "Tracker.h"
#include "Ilog.h"
#include <chrono>
#include <QCoreApplication>
#include <thread>
#include <iostream>
#include <QTextStream>


int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    QTextStream cout(stdout);
    QTextStream cin(stdout);

    ConsoleLog l;
    l.log("hjkdfghsgdkhjgsfd");
    //QString str = cin.readLine(100);
    //Tracker A(str);
    //std::cout << "File name: " << str.toStdString();
    //std::this_thread::sleep_for( std::chrono::milliseconds( 100 ) );
    return app.exec();
}
