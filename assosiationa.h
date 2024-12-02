#ifndef ASSOSIATIONA_H
#define ASSOSIATIONA_H
#include "classb.h"
#include <iostream>

using namespace std;


class AssosiationA
{
public:
    AssosiationA(ClassB);
    string getBInfo();
    void setBInfo(string);

private:
    ClassB objectB;
};

#endif // ASSOSIATIONA_H
