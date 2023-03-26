#include<iostream>
using namespace std;

class test{
    public:
    test(){
        cout<<"constructor executed"<<endl;
    }
    ~test(){
        cout<<"destructor executed"<<endl;
    }
};
int main(){
    test t1;
    return 0;
}