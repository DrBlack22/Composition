#include "language.h"
#include <iostream>
#include "version.h"
using namespace std;

language::language(string x, version V)
: name(x), Version(V)
{

}
void language::printInfo(){
    cout << name << " is of the version ";
    Version.printVersion();
}
