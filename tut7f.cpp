#include<iostream>
using namespace std;

int main(){
    int x=20;
    int &ref=x;

    ref=21;
    cout<<"The value of x is:"<<x<<endl;

    x=22;
    cout<<"The value of ref is:"<<ref<<endl;
    return 0;
}


