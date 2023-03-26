#include<iostream>
using namespace std;
//Pointers in c++
int main(){
    int a=3;
    int *b=&a;
    cout<<"The address of a is:"<<b;
    cout<<"The address of a is:"<<&a;
    cout<<"The value at address b is:"<<*b<<endl;
    return 0;
}