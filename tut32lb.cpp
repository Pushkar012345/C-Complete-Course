#include<iostream>
using namespace std;

class simple{
    int data1;
    int data2;
    int data3;
    public:
    simple(int a,int b=8,int c=2){
        data1=a;
        data2=b;
        data3=c;
    }
    void printNumber();
};
void simple::printNumber(){
    cout<<"The value of data is:"<<data1<<","<<data2<<"and"<<data3<<endl;
}
int main(){
    simple s(3);
    s.printNumber();
    return 0;
}

