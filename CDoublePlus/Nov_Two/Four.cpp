#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class A //base class
{
private:
int privdataA;
protected: 
int protdataA;
public:
int pubdataA;
};
////////////////////////////////////////////////////////////////
class B : public A //derived class 
{
public:
void funct()
{
int a;
a = privdataA; 
a = protdataA; 
a = pubdataA; 
}
};
////////////////////////////////////////////////////////////////
class C : private A //privately-derived class
{
public:
void funct()
{
int a;
a = privdataA; 
a = protdataA; 
a = pubdataA; 
}
};
////////////////////////////////////////////////////////////////
int main()
{
int a;
B objB;
a = objB.privdataA; 
a = objB.protdataA; 
a = objB.pubdataA; 
C objC;
a = objC.privdataA;
a = objC.protdataA; 
a = objC.pubdataA;
return 0;
}