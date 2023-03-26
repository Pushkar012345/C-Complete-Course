#include<iostream>
using namespace std;

class BaseClass{
    public:
    int var_base;
    void display(){
        cout<<"Displaying base class variable:"<<var_base<<endl;
    }
};
class DerivedClass:public BaseClass{
    public:
    int var_derived;
    void display(){
        cout<<"Displaying derived class var as:"<<var_derived<<endl;
    }
};

int main(){
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer=&obj_derived;

    base_class_pointer->var_base=34;
    //base_class_pointer->var_derived=134; this rhrowa an error
    base_class_pointer->display();

    //made derived class pointer
    DerivedClass *derived_class_pointer;
    derived_class_pointer= &obj_derived;
    derived_class_pointer->var_derived=98;
    derived_class_pointer->display();

    
    return 0;
}