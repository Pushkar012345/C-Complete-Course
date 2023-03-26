#include<iostream>
using namespace std;

int product(int a,int b){
    int c=a*b;
    return c;
}

int main(){
    int a,b;
    cout<<"Enter the value of a and b:"<<endl;
    cin>>a>>b;
    cout<<"THe product of a and b is:"<<product(a,b);
    return 0;
}