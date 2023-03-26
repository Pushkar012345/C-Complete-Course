#include<iostream>
using namespace std;

template<class T>
class Harry{
    public:
    int data;
    Harry(int a){
        data=a;
    }
    void display(){
        cout<<"The value of a is:"<<data<<endl;
    }

};

int main(){
    Harry<int> h(4);
    h.display();
    return 0;
}