//Example of multiple inheritance in c++
#include<iostream>
using namespace std;

class A1
{
    public:
    A1(){
        int a=2,b=3,c;
        c=a+b;
        cout<<"sum is:"<<c<<endl;
    }
};
class A2
{
    public:
    A2(){
        int x=6,y=1,z;
        z=x-y;
        cout<<"difference is:"<<z<<endl;
    }
};

class S:public A1,virtual A2
{
    public:
    S():A1(),A2()
    {
        int r=3,s=2,t;
        t=r*s;
        cout<<"multiplication is:"<<t<<endl;
       
    }
};
int main(){
    S object;
    return 0;
}
