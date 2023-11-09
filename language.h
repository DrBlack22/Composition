#ifndef LANGUAGE_H
#define LANGUAGE_H
#include <string>
#include "version.h"
#include "version.cpp"
using namespace std;

class language
{
    public:
        language(string x, version V);
        void printInfo();
    private:
        string name;
        version Version;
};

#endif // LANGUAGE_H
