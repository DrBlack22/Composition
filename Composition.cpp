#include <iostream>
#include "version.h"
#include "language.h"
#include "language.cpp"
using namespace std;
int main(){

    version Ver(8,22,1997);
    language py("Python", Ver);
    py.printInfo();
}
