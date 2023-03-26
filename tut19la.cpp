#include<iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}
int sum(int a,int b,int c){
    return a+b+c;
}
int main(){
    
    cout<<"The sum of 2+3 is:"<<sum(2,3)<<endl;
    cout<<"The sum of 2+3+1 is:"<<sum(2,3,1)<<endl;
    return 0;
}