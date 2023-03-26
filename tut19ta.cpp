//function overloading and ambuiguity type conversion:
#include<iostream>
using namespace std;
void fun(int i){
    cout<<"Value of i is:"<<i<<endl;

}
void fun(float a){
    cout<<"value of float is:"<<a<<endl;
}
int main(){
    fun(12);
    fun(1.3);
    return 0;
}

