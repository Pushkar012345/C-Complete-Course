#include<iostream>
using namespace std;

int main(){
    int a=4;
    float b=3.12;

    cout<<"The value of  a is:"<<int(a)<<endl;
    cout<<"The value of  a is:"<<(int)a<<endl;
    cout<<"The value of  b is:"<<float(b)<<endl;
    cout<<"The value of  b is:"<<(float)b<<endl;
    
    cout<<"The expression is:"<<a+b<<endl;
    cout<<"The expression is:"<<a+int(b)<<endl;
    cout<<"The expression is:"<<a+(int)b<<endl;
    return 0;
}