//Example program for pointers and use of new keyword is:
#include<iostream>
using namespace std;

int main(){
    float *p=new float(40.78);
    cout<<"The value at address of float is:"<<*p<<endl;
    return 0;

}