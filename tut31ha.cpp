#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex(int X,int Y){
        a=X;
        b=Y;
    }
    complex(int X){
        a=X;
        b=0;
    }
    complex(){
        a=0;
        b=0;
    }
    void printNumber(){
        cout<<"The number is:"<<a<<"+"<<b<<"i"<<endl;
    }

};
int main(){
    complex c1(2,3);
    c1.printNumber();

    complex c2(2);
    c2.printNumber();

    complex c3;
    c3.printNumber();
    return 0;

}