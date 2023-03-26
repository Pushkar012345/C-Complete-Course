//Example of dynamic allocation using  dynamic constructor:
#include<iostream>
using namespace std;

class geeks{
    int *ptr;

    public:
    geeks(){
        ptr=new int;
        *ptr=10;
    }
    void display(){
        cout<<*ptr;
    }
};
    int main(){
     

        geeks *obj1=new geeks();
        geeks *obj2=new geeks();

        obj2=obj1;

        obj1->display();
        obj2->display();

       delete obj1;
       return 0;
    }


