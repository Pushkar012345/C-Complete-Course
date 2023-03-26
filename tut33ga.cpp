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
        geeks c;
        c.display();
        return 0;
    }


