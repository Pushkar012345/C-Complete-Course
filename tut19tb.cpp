//function with default arguments:
#include<iostream>
using namespace std;

void fun(int i){
    cout<<"the value of i is:"<<i<<endl;
}
void fun(int a,int b=0){
    cout<<"the value of a and b is: "<<a<<b<<endl;
}
int main(){
    fun(12);
    return 0;
}

