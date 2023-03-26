#include<iostream>
using namespace std;

class A{
    protected:
    int a;
    public:
    void set_A(int x){
        a=x;
    }
    void disp_A(){
        cout<<"value of disp_A is:"<<a<<endl;
    }
};

class B:public A{
    int b,p;
    public:
    void set_B(int x,int y){
        set_A(x);
        b=y;
    }
    void disp_B(){
         disp_A();
         cout<<"value of disp_B is:"<<b<<endl;
    }
    void cal_Product(){
        p=a*b;
        cout<<"Value of a"<<a<<"*"<<b<<"is"<<p<<endl;
    }
};
int main(){
    B obj1;
    obj1.set_B(10,2);
    obj1.cal_Product();
    return 0;

}