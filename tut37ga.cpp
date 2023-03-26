//Gfg example of inheritance
#include<iostream>
using namespace std;

class Parent{
    public:
    int id_p;
};
class Child:public Parent{
    public:
    int id_c;
};
int main(){
    Child obj1;
    obj1.id_p=8;
    obj1.id_c=7;
    cout<<"id of parent is:"<<obj1.id_p<<endl;
    cout<<"id of parent is:"<<obj1.id_c<<endl;

    return 0;
}