//Example of accessing private data member indirectly using public member function of class:
#include<iostream>
using namespace std;

class Circle{
    private:
    double radius;
    public:
    double Compute_area(double r){
    
        double radius =r;
        double area=3.14*r*r;
        cout<<"radius is:"<<r<<endl;
        cout<<"area is:"<<area<<endl;

    }
    
};

int main(){
    Circle obj;
    obj.Compute_area(1.2);
    return 0;
}