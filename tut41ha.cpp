//Example of multiple inheritance
#include<iostream>
using namespace std;

class Base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int=a;
    }
};
class Base2{
    protected:
    int base2int;
    public:
    void set_base2int(int a){
        base2int=a;
    }
};
class Base3{
    protected:
    int base3int;
    public:
    void set_base3int(int a){
        base3int=a;
    }
};
class derived:public Base1,public Base2,public Base3
{
    public:
    void show(){
        cout<<"The value of base1int is:"<<base1int<<endl;
        cout<<"The value of base2int is:"<<base2int<<endl;
        cout<<"The value of base3int is:"<<base3int<<endl;
        cout<<"the sum of base1int,base2int and base3int is:"<<base1int+base2int+base3int<<endl;
    }

};
int main(){
    derived harry;
    harry.set_base1int(5);
    harry.set_base2int(4);
    harry.set_base3int(1);
    harry.show();
    return 0;
}
