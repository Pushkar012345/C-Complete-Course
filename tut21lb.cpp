#include<iostream>
using namespace std;

class Employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void setData(int a1,int b1,int c1);
    void getData(){
        cout<<"value of a is:"<<a<<endl;
        cout<<"value of b is:"<<b<<endl;
        cout<<"value of c is:"<<c<<endl;
        cout<<"value of d is:"<<d<<endl;
        cout<<"value of e is:"<<e<<endl;
    }

};

void Employee::setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    Employee harry;
    harry.d=20;
    harry.e=19;
    harry.setData(1,2,3);
    harry.getData();
    return 0;
}
