//Example of hierachical inheritance:-
#include<iostream>
using namespace std;
//base class
class vehicle{
    public:
    vehicle(){
        cout<<"This is a vehicle"<<endl;
    }
};
//derived class 1
class car:public vehicle
{

};
//derived class 2
class fourwheeler:public vehicle
{

};
//main function
int main(){
    //creating objects of subclass will invoke constructor of base classes
    car obj1;
    fourwheeler obj2;
    return 0;
}
