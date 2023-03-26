#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex(int,int);
    void printNumber(){
        cout<<"The number is:"<<a<<"+"<<b<<"i"<<endl;
    }

};
complex::complex(int x,int y){
    a=x;
    b=y;
}
int main(){
    //implicit call
    complex a(4,6);
    //explicit call
    complex b=complex(5,6);
    a.printNumber();
    b.printNumber();
    return 0;
}