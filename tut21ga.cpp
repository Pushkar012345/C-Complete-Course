#include<iostream>
using namespace std;

class circle{
    public:
    double radius;
    double compute_area(){
      return 3.14*radius*radius;
    }
};
int main(){
    circle obj;
    obj.radius=2.2;
    cout<<"the radius is:"<<obj.radius<<endl;
    cout<<"The area is:"<<obj.compute_area()<<endl;
    return 0;

}
    
