#ifndef CLASSB_H
#define CLASSB_H
#include <iostream>

using namespace std;


class ClassB
{
public:
    ClassB();
    string getInfo();
    void setInfo(string newInfo);

private:
    string info;
};

#endif // CLASSB_H
