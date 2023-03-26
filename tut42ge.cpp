#include<iostream>
using namespace std;
//base class 1
class A{
    protected:
    int a;
    public:
    void get_a(){
        cout<<"The value of a is:"<<endl;
        cin>>a;
    }
//derived class1
};
class B:public A
{
    protected:
    int b;
    public:
    void get_b(){
        cout<<"The value of b is:"<<endl;
        cin>>b;
    }
};
//base class2
class C{
    protected:
    int c;
    public:
    void get_c(){
        cout<<"The value of c is:"<<endl;
        cin>>c;
    }
};
//derived class3
class D:public B,public C
{
    protected:
    int d;
    public:
    void mul(){
        cout<<"The value of a is:"<<a<<endl;
        cout<<"The value of b is:"<<b<<endl;
        cout<<"The value of c is:"<<c<<endl;
        cout<<"The value of a*b*c is:"<<a*b*c<<endl;
    }
};
//main function
int main(){
    D obj1;
    obj1.get_a();
    obj1.get_b();
    obj1.get_c();
    obj1.mul();
    return 0;
}
