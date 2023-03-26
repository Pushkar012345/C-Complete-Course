#include<iostream>
using namespace std;
 
class employee{
    int id;
     static int count;
    public:
        void setData(void){
            cout<<"enter the id:"<<endl;
            cin>>id;
        }
        void getData(void){
            cout<<"the id of employee is:"<<id;
          
        }
};
int employee::count;
int main(){
    employee harry,rohan,lovish;
    harry.setData();
    harry.getData();

    harry.setData();
    harry.getData();

    harry.setData();
    harry.getData();
    return 0;
}