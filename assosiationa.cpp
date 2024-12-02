#include "assosiationa.h"

AssosiationA::AssosiationA(ClassB value):objectB(value)
{

}

string AssosiationA::getBInfo()
{
    return objectB.getInfo();

}

void AssosiationA::setBInfo(string value)
{
    objectB.setInfo(value);

}
