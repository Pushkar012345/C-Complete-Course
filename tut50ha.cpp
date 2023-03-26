#include<iostream>
using namespace std;

int main(){
    //Example of pointers
    int a;
    int *ptr=&a;
    *ptr=33;
    cout<<"The value at address of a is:"<<*ptr<<endl;
}