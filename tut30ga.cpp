//Example of default constructor
#include<iostream>
using namespace std;

class Construct{
    int a,b;
    public:
    Construct(){
       a=10;
       b=20;
    }
    void displaynumber(){
        Construct c;
        cout<<"a is:"<<c.a<<endl;
        cout<<"b is:"<<c.b<<endl;
    }
};
int main(){
    
    Construct c;
    c.displaynumber();
    
    return 0;

}