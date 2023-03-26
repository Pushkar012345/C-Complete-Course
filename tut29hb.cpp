// example of defining constructor inside class
#include <iostream>
using namespace std;

class student
{
    int Rollno;
    char name;
    double fee;

public:
    student()
    {
       cout<<"enter the roll no:"<<endl;
       cin>>Rollno;
       cout<<"Enter thr name:"<<endl;
       cin>>name;
       cout<<"enter the fee"<<endl;
       cin>>fee;
    }
    void display()
    {
        cout << "rno is" <<Rollno<<endl;
        cout << "name is" <<name<<endl;
        cout << "fee is" <<fee<<endl;
    }
};
int main()
{
    student s;
    s.display();
    return 0;
}