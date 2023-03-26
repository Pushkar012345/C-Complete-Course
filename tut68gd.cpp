//Templates with more than one arguments
#include<iostream>
using namespace std;

template<class U,class y=char>
class A{
    U x;
    y v;
    public:
    A(){
        cout<<"Constructor called"<<endl;
    }
};

int main(){
    A<char> b;
    return 0;
}