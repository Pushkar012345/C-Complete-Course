//class templates with default arguments in c++
//
#include<iostream>
using namespace std;
//here u can pass default arguments also can value and if not pass any then default
//value of t1 t2 t3 will be used.
template<class T1=int,class T2=float,class T3=char>
class Harry{
    public:
    T1 a;
    T2 b;
    T3 c;
    Harry(T1 x,T2 y,T3 z){
        a=x;
        b=y;
        c=z;
    }
    void display(){
        cout<<"The value of a is:"<<a<<endl;
        cout<<"The value of b is:"<<b<<endl;
        cout<<"The value of c is:"<<c<<endl;
    }

};

int main(){
    Harry<> h(5,4.5,'c');
    h.display();
    cout<<endl;
    //now here specify data type and instantly crete object
    Harry<float,char,char> g(1.4,'o','c');
    g.display();
    return 0;

}