//c++ program to demonstrate concept of single inheritance
#include<iostream>
using namespace std;
//Base class
class vehicle{
    public:
    vehicle(){
        cout<<"This is vehicle"<<endl;
    }
};
//derived class inherited from single base class only
class car:public vehicle{

};
//main function
int main(){
    car obj1;
    return 0;
}
