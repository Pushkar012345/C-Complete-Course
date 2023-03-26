//c++ program to use arrow operator used in union
#include<iostream>
using namespace std;
//creating union student
union student{
    char name[30];
    int roll_no;
    int age;
};
//creating union object
union student *emp=NULL;
//driver code
int main(){
    //assigning memory to struct object
    emp=(union student*)
        malloc (sizeof(union student));
    emp->age=20;
    cout<<"age is:"<<emp->age<<endl;
    return 0;


}