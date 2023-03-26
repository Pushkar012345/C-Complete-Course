#include<iostream>
using namespace std;

int main(){
    int *p=NULL;
    p=new(nothrow)int;
    if(!p){
        cout<<"Allocation of memory failed."<<endl;
    }
    else
    {
        *p=20;
        cout<<"Value of *p is:"<<*p<<endl;
    }
    //request block of memory using new operator
    float *r= new float(10.20);
    cout<<"Value of *r is:"<<*r<<endl;
    //request block of memory of size n
    int n=5;
    int *q=new(nothrow)int[n];
    for(int i=0;i<n;i++){
        q[i]=i+1;
        cout<<"Value initializing is:"<<endl;
        cout<<"for(int i=0;i<n;i++)"<<endl;
        cout<<q[i]<<endl;
    }
    delete p;
    delete q;
    delete[]q;
    return 0;


}
