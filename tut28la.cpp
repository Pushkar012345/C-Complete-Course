#include<iostream>
using namespace std;

class x{
    int data;
    public:
    void setValue(int value){
        data=value;
    }
    friend void add(x,Y);

};
class Y{
    int num;
    public:
        void setValue(int value){
            num=value;
        }
        friend void add(x,Y){
            cout<<"Summing datas of x and y objects gives me"<<o1.data+o2.num;
}
        };

void add(x o1,Y o2){
    x a1;
    a.setValue(3);

    Y b1;
    b.setvalue(5);
    add(a1,b1);
    return 0;
}
