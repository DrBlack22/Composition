#ifndef VERSION_H
#define VERSION_H
class version
{
    public:
        version(int m, int d, int y);
        void printVersion();
;
    protected:
    int month;
    int day;
    int year;
};

#endif // VERSION_H
