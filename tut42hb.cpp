//example of hybrid inheritance
#include<iostream>
using namespace std;
//base class1
class vehicle
{
    public:
    vehicle(){
        cout<<"this is a vehicle"<<endl;
    }

};
//base class2
class fare
{
    public:
    fare(){
        cout<<"this is a fare"<<endl;
    }

};

//subclass1
class car:public vehicle
{
    public:
    car(){
        cout<<"This is a car"<<endl;
    }
};
//subclass 2
class bus:public vehicle,public fare
{
    
};
//main function
int main(){
    //creating object of subclass will invoke constructor of base classes
    bus obj1;
    return 0;
}


