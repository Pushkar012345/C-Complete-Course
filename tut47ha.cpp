#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
    int a,b;
    public:
    void getDatasimple(){
        cout<<"enter the value of a:"<<endl;
        cin>>a;

        cout<<"enter the value of b:"<<endl;
        cin>>b;
    }
    void performOperationssimple(){
        cout<<"The value of a+b is:"<<a+b<<endl;
        cout<<"The value of a-b is:"<<a-b<<endl;
        cout<<"The value of a*b is:"<<a*b<<endl;
        cout<<"The value of a/b is:"<<a/b<<endl;
    }
};

class ScientificCalculator{
    int a,b;
    public:
    void getDataScientific(){
        cout<<"enter the value of a:"<<endl;
        cin>>a;

        cout<<"enter the value of b:"<<endl;
        cin>>b;
    }
    void performOperationsScientific(){
        cout<<"The value of tan(a) is:"<<tan(a)<<endl;
        cout<<"The value of sin(a) is:"<<sin(a)<<endl;
        cout<<"The value of cos(a) is:"<<cos(a)<<endl;
        cout<<"The value of exp(a) is:"<<exp(a)<<endl;
    }
};

class HybridCalculator:public SimpleCalculator,public ScientificCalculator{


};

int main(){
    HybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationsScientific();
    calc.getDatasimple();
    calc.performOperationssimple();   
     return 0;

}

