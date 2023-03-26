// C++ program to illustrate Pointers in C++
#include<iostream>
using namespace std;

int main(){
    int m=10;
    int *ptr;
    ptr=&m;
    cout<<"the value at ptr is:"<<ptr<<endl;
    cout<<"The value at ptr is:"<<m<<endl;
    cout<<"the value at ptr is:"<<*ptr<<endl;
    
    return 0;
}