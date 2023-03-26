#include<iostream>
using namespace std;

class employee{
    int id;
    static int count;

    public:
    void setdata(void){
        cout<<"Enter the id"<<endl;
        cin>>id;
        count++;
    }
    void getdata(void){
        cout<<"The id of Employee is:"<<id<<"and this employee no"<<count<<endl;
    }
    static void getcount(void){
        cout<<"the value of count is:"<<count<<endl;
    }
};
int employee::count;
int main(){
    employee harry;
    harry.setdata();
    harry.getdata();
    employee::getcount();
    return 0;


}