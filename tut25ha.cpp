//Example of array of objects in c++:
#include<iostream>
using namespace std;

class Employee{
    int Id;
    int salary;

    public:
    void setdata(void){
        cout<<"the id of employee is:"<<endl;
        cin>>Id;
    }
    void getdata(void){
        cout<<"The id of employee is:"<<Id<<endl;

    }
};
int main(){
    Employee fb[5];
    for(int i=0;i<5;i++){
        fb[i].setdata();
        fb[i].getdata();
        
    }
    return 0;
}