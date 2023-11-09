#include "version.h"
#include <iostream>
using namespace std;
version::version(int m, int d, int y)
{
    month = m;
    day = d;
    year = y;
}
void version::printVersion(){
    cout << month << ":" << day << ":" << year << endl;
}
