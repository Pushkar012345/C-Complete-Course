#include<iostream>
#include<cmath>
using namespace std;

class simpleCalculator{
    int a,b;
    public:
        void getDataSimple(){
            cout<<"Enter the value of a:"<<endl;
            cin>>a;
            cout<<"Enter the value of b:"<<endl;
            cin>>b;
        }
        void performOperationsSimple(){
            cout<<"The value of a+b is:"<<a+b<<endl;
            cout<<"The value of a-b is:"<<a-b<<endl;
            cout<<"The value of a*b is:"<<a*b<<endl;
            cout<<"The value of a/b is:"<<a/b<<endl;

        }

};

class scientificCalculator{
    int a,b;
    public:
        void getDatascientific(){
            cout<<"Enter the value of a:"<<endl;
            cin>>a;
            cout<<"Enter the value of b:"<<endl;
            cin>>b;
        }
        void performOperationsScientific(){
            cout<<"The value of cos(a) is:"<<cos(a)<<endl;
            cout<<"The value of sin(a) is:"<<sin(a)<<endl;
            cout<<"The value of exp(a) is:"<<exp(a)<<endl;
            cout<<"The value of tan(a) is:"<<tan(a)<<endl;

        }




};

class HybridCalculator:public simpleCalculator,public scientificCalculator{

};

int main(){
    //simpleCalculator calc;
    //calc.getData();
   // calc.performOperations();
   HybridCalculator calc;
   calc.getDatascientific();
   calc.performOperationsScientific();
   calc.getDataSimple();
   calc.performOperationSimple();



    return 0;
}