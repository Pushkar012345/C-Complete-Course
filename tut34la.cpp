#include<iostream>
using namespace std;

class Number{
    int a;

    public:
    Number(){
        a=0;
    }
    Number(int num){
        a=num;
    }
    Number(Number &obj){
        cout<<"Copy constructor called";
        a=obj.a;
    }
    void display(){
        cout<<"Thr number for this object is:"<<a<<endl;
    }
    
};
int main(){
    Number x,y,z(45);
    z.display();
    x.display();
    y.display();
    Number z1(x);
    z1.display();
    return 0;
}