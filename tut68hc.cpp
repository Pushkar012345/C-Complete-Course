//Example of overloading template functions in c++
#include<iostream>
using namespace std;


    void func(int a){
        cout<<"I am the first function"<<a<<endl;
    }
    template<class T>
    void func(T a){
        cout<<"I am parameterised function"<<a<<endl;
    }

    int main(){
        func(4);
        return 0;
    }