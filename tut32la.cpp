#include<iostream>
using namespace std;

class simple{
    int data1;
    int data2;
    public:
    simple(int a,int b=8){
        data1=a;
        data2=b;
    }
    void printNumber();
};
void simple::printNumber(){
    cout<<"The value of data is:"<<data1<<"and"<<data2<<endl;
}
int main(){
    simple s(3);
    s.printNumber();
    return 0;
}

