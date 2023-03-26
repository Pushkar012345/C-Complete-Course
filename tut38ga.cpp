//example program on 3 modes of inheritance
//here classes b,c,d all contain variable x,y,z
#include<iostream>
using namespace std;

class A{
    public:
    int x;
    protected:
    int y;
    private:
    int z;
};
class B:public A{

};
class c:protected A{

};
class D:private A{

};

