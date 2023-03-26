//Templates with more than one arguments
#include<iostream>
using namespace std;

template<class U,class y>
class A{
    U x;
    y v;
    public:
    A(){
        cout<<"Constructor called"<<endl;
    }
};

int main(){
    A<int ,int> b;
    return 0;
}