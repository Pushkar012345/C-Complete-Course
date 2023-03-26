//Example 1 of parameterised constructor
#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex(int,int);
    void displayNumber(){
        cout<<"your number is"<<a<<"+"<<b<<"i"<<endl;
    }

};
 complex::complex(int x,int y){
    a=x,
    b=y;

}
int main(){
    //Example of implicit call
    complex a(1,2);
    a.displayNumber();

    //example of explicit call
    complex b=complex(3,4);
    b.displayNumber();
    return 0;
}