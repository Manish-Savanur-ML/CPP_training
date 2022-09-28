#include<iostream>
#include<fstream>
#include<thread>
#include"logger.h"
using namespace std;

void thread1()
{
    Logger *l;
    ofstream ofile;
    ofile.open("cpp1.log", ios :: app);
    l = Logger::getInstance();
    l->info("Washing machine started", ofile);
    l->warn("Washing machine overloaded !!!", ofile);
    l->error("Washing machine paused with error code 000xxx", ofile);
    ofile.close();
    delete l;
 
}

void thread2()
{
    Logger *l;
    ofstream ofile;
    ofile.open("cpp2.log", ios :: app);
    l = Logger::getInstance();
    l->info("Washing machine started", ofile);
    l->warn("Washing machine overloaded !!!", ofile);
    l->error("Washing machine paused with error code 000xxx", ofile);
    ofile.close();
    delete l;

}
main()
{
    thread t1(thread1);
    thread t2(thread2);
    t1.join();
    t2.join();
    /*
    Logger *l;
    ofstream ofile;
    ofile.open("cpp.log", ios :: app);
    l = Logger::getInstance();
    l->info("Washing machine started", ofile);
    l->warn("Washing machine overloaded !!!", ofile);
    l->error("Washing machine paused with error code 000xxx", ofile);
    ofile.close();
    delete l;
    */
}
