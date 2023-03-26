//c++ program to use arrow op used in struct
#include<iostream>
using namespace std;
//creating structure student
struct student{
    int roll_no;
    char name[30];
    int age;
};
//creating structure object

struct student*emp=NULL;
//driver code
int main(){
    emp=(struct student*)
        malloc(sizeof(struct student));
    emp->age=18;
    cout<<""<<emp->age<<endl;
    return 0;
    
}
