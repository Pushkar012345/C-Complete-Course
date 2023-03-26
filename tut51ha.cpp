#include<iostream>
using namespace std;

class Complex{
    int real;
    int imaginary;
    public:
    void getData(){
        cout<<"Real no is:"<<real<<endl;
        cout<<"imaginary no is:"<<imaginary<<endl;
    }
    void setData(int a,int b){
        real=a;
        imaginary=b;
    }
};

int main(){
    Complex *ptr=new Complex;
    (*ptr).setData(5,6);
    (*ptr).getData();
    return 0;
}