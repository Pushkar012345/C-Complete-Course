#include<iostream>
using namespace std;

class student{
    int rno;
    char name;
    double fee;

    public:
    student(int r,char n,double f){
        rno=r;
        name='n';
        fee=f;



    }
    void displaydata(){
      cout<<rno<<endl;
      cout<<name<<endl;
      cout<<fee<<endl;

    }
};
int main(){
    student s(3,'n',23);
    s.displaydata();
    return 0;
}
