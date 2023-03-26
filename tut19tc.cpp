#include<iostream>
using namespace std;

void fun(int x){
    cout<<"The value of x is:"<<x<<endl;

}
void fun(int &b){
  cout<<"value of b is:"<<b<<endl;
}
int main(){
    int a=10;
    fun(a);
    return 0;
}