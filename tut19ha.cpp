//Example of function overloading
#include<iostream>
using namespace std;

int sum(float a,int b){
    cout<<"using function with two arguments:"<<endl;
    return a+b;
}
int sum(int a,int b,int c){
    cout<<"using function with three arguments:"<<endl;
    return a+b+c;
}
int main(){
    cout<<"the sum of 3 and 6 is:"<<sum(3,4)<<endl;
    return 0;
}

