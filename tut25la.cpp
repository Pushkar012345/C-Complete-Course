#include<iostream>
using namespace std;

class Employee{
    int Id;
    

    public:
    int salary=22;
        void setId(void){
            cout<<"enter id of Employee:"<<endl;
            cin>>Id;

        }
        void getId(void){
            cout<<"Id of employee is:"<<Id<<endl;
        }
};

int main(){
    //Employee pushkar,ram,rana;
    //pushkar.setId();
    //pushkar.getId();
    Employee fb[5];
    for(int i=0;i<5;i++){
       
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}