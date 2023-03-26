#include<iostream>
using namespace std;

int main(){
    int a=33;
    int*b=&a;
    cout<<"The address of variable a is:"<<&a;
    cout<<"The address of variable a is:"<<b;
    cout<<"The value at variable a is :"<<*b;
    
    int**c=&b;
    cout<<"The address of variable b is:"<<c<<endl;
    cout<<"The address of variable b is :"<<&b<<endl;
    cout<<"The value at variacle c is:"<<*c<<endl;
    cout<<"The value at variable b is :"<<**c<<endl;
    return 0;
}

