#include<iostream>
using namespace std;

class Employee{
    int Id;
    char name[50];

    public:
    void getdata(void);
    void setdata(void);

};
void Employee::getdata(void){
    cout<<"Enter employee Id:"<<endl;
    cin>>Id;
    cout<<"Enter name:"<<endl;
    cin>>name;
}
void Employee::setdata(void){
    cout<<"yo Id is:"<<endl;
    cout<<Id<<endl;
    cout<<"yo name is:"<<endl;
    cout<<name<<endl;
}
int main(){
    Employee emp[5];
    int n,i;
    cout<<"enter no of employees:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        emp[i].getdata();

    }
    cout<<"Employee data:"<<endl;
    for(int i=0;i<n;i++){
        emp[i].setdata();
        
    }
    return 0;

}

