#include<iostream>
using namespace std;

class Complex{
    int real,imaginary;
    public:
    void getdata(){
        cout<<"The real part is:"<<real<<endl;
        cout<<"The imaginary part is:"<<imaginary<<endl;
    }
    void setdata(int a,int b){
        real=a;
        imaginary=b;
    }
};
int main(){
    Complex *ptr=new Complex;
    ptr->setdata(1,54);
    ptr->getdata();

    
    return 0;
}

