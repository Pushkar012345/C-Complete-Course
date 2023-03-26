//c++ program to implement constructor in multiple inheritance:
#include<iostream>
using namespace std;

class A1{
    public:
    A1(){
        cout<<"Constructor of base class A1"<<endl;
    }
};
class A2{
    public:
    A2(){
        cout<<"Constructor of base class A2"<<endl;
    }
};
class s:public A1,virtual A2
{
    public:
    s():A1(),A2()
    {
        cout<<"constructor of derived class s"<<endl;

    }
    
};

int main(){
    s object;
    return 0;


}

