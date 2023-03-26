//c++ program to show dynamic allocation and deallocation of memory using new and delete:
#include<iostream>
using namespace std;

int main(){
    int*p=NULL;
    p=new(nothrow)int;
    if(!p){
        cout<<"Mempry allocation failed:"<<endl;
    }
    else{
        *p=29;
        cout<<"value at p is:"<<*p<<endl;
    }
    ///////////////////////////////////////
    float *r=new float(30.12);
    cout<<"Value at r is:"<<*r<<endl;
    //////////////////////////////////////
    int n=5;
    int *q=new(nothrow)int[n];
    if(!q){
        cout<<"Allocation of memory failed."<<endl;
    }
    else
    {
        
    }


    return 0;
}