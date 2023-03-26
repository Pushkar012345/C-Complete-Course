//c++ program to use arrow operator in struct
#include<iostream>
using namespace std;
//creating struct student
struct student{
    char name[30];
    int roll_no;
    int age;
};
//creating struc object
struct student *emp=NULL;
//driver code
int main(){
    //assigning memory to struct object
    emp=(struct student*)
        malloc (sizeof(struct student));
    emp->age=20;
    cout<<"age is:"<<emp->age<<endl;
    return 0;


}