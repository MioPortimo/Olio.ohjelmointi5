#include <iostream>
#include "classb.h"
#include "assosiationa.h"
#include "aggregationa.h"

using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    cout << "a:n arvo on: " << a << " ja osoite on: " << &a <<endl;
    cout << "b:n arvo on: " << b << " ja osoite on: " << &b <<endl;

    int *myPointer;
    myPointer = &a;
    cout << "Pointterin osoittama osoite on: " << myPointer <<endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer <<endl;

    myPointer = &b;
    cout << "Pointterin osoittama osoite on: " << myPointer <<endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer <<endl;

    int &refA = a;

    cout << "refA osoittaa osoitteeseen: " << &refA <<endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA <<endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBInfo("Olion objAss asettama info");

    cout << "Assosiaatio esimerkki:" <<endl;
    cout << "objB: " << objB.getInfo() <<endl;
    cout << "objAss: " << objAss.getBInfo() <<endl;

    cout << "Aggregaatio esimerkki:" <<endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBInfo("Olion Agr asettama info");
    cout << "objB: " << objB.getInfo() <<endl;
    cout << "objAggr: " << objAggr.getBInfo() <<endl;
    cout <<endl;
    return 0;
}
