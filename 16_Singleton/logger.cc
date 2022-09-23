#include<iostream>
#include<fstream>
#include"logger.h"
using namespace std;
main()
{
    Logger *l;
    ofstream ofile;
    ofile.open("cpp.log", ios :: app);
    l = Logger::getInstance();
    l->info("Washing machine started", ofile);
    l->warn("Washing machine overloaded !!!", ofile);
    l->error("Washing machine paused with error code 000xxx", ofile);
    ofile.close();
    delete l;
}
