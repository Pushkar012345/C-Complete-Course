//Passing object as an argument:
#include<iostream>
using namespace std;

class Example{
    public:
    int a;

   
    void add(Example E){
        a=a+E.a;
    }
};
int main(){
    Example E1,E2;
    
    //values are initialized:
    E1.a=50;
    E2.a=60;
    //
    cout<<"initialized value:";
    cout<<"value of object 1"<<E1.a<<endl;
    cout<<"Value of object 2"<<E2.a<<endl;

    //passing obj as an argument
    E2.add(E1);
    cout<<"Later values"<<endl;
    cout<<"value of object 1"<<E1.a;
    cout<<"value of object 2"<<E2.a;
    return 0;

}