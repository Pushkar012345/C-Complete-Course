#include<iostream>
using namespace std;

int main(){
    int var=20;
    int *ptr=&var;
    cout<<"The value at ptr is:"<<ptr<<endl;
    cout<<"The value at ptr is:"<<var<<endl;
    cout<<"the value at ptr is:"<<*ptr<<endl;
    return 0;
}

