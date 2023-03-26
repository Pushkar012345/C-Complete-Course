//Example program of gfg for explaining inheritance
#include<iostream>
using namespace std;

class A{
    protected:
    int a;
    public:
    void set_a(){
        cout<<"Enter value of a"<<endl;
        cin>>a;
    }
    void dis_a(){
        cout<<"value of a is:"<<a<<endl;
    }
    
};
class B:public A{
    int b,p;
    public:
    void set_b(){
        cout<<"Enter value of b"<<endl;
        cin>>b;
    }
    void dis_b(){
        cout<<"value of b is:"<<b<<endl;
    }
    int product_p(){
        p= a*b;
        cout<<"The value of:"<<a<<"*"<<b<<"is"<<p<<endl;
    }

};
int main(){
    B obj1;
    obj1.set_a();
    obj1.set_b();
    obj1.product_p();
    return 0;
}