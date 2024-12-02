#include "aggregationa.h"

AggregationA::AggregationA(ClassB &value):refB(value)
{

}

string AggregationA::getBInfo()
{
    return refB.getInfo();

}

void AggregationA::setBInfo(string value)
{
    refB.setInfo(value);

}
