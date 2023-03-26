#include<iostream>
using namespace std;
//base class1
class vehicle{
    public:
    vehicle(){
        cout<<"this is vehicle"<<endl;
    }
};
//base class2
class fourWheeler{
    public:
    fourWheeler(){
        cout<<"this is fourWheeler"<<endl;
    }
};
//creating derived class
class car:public vehicle,public fourWheeler
{

};
//main function
int main(){
    //creating objects of subclass will invoke constructors of base classes
    car obj;
    return 0;
    
}


