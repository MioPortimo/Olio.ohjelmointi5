#ifndef AGGREGATIONA_H
#define AGGREGATIONA_H
#include <iostream>
#include "classb.h"

using namespace std;


class AggregationA
{
public:
    AggregationA(ClassB&);
    string getBInfo();
    void setBInfo(string);

private:
    ClassB &refB;
};

#endif // AGGREGATIONA_H
