#include<iostream>
using namespace std;

class A
{
    public:
    A(){
        int a=2,b=3,c;
        c=a+b;
        cout<<"sum is:"<<c<<endl;
    }
};
class B:public A
{
    public:
    B(){
        int x=6,y=1,z;
        z=x-y;
        cout<<"difference is:"<<z<<endl;
    }
};
class C:public B
{
    public:
    C(){
        int r=3,s=2,t;
        t=r*s;
        cout<<"multiplication is:"<<t<<endl;
    }
};
int main(){
    C object;
    return 0;
}
