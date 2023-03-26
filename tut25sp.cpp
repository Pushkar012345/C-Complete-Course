#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
    void setid(void){
        cout<<"The id of employee is:"<<endl;
        cin>>id;
    }
    void getid(void){
        cout<<"the id of employee is:"<<id;
    }
};
int main(){
    Employee em[3];
    for(int i=0;i<3;i++){
      em[i].setid();
      em[i].getid();
     
    }
    return 0;
}
