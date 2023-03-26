#include <iostream>
using namespace std;
// Base class
class Employee
{
public:
    int id;

    float salary;
    Employee(int inpid)
    {
        id = 1;
        salary = 34;
    }
    Employee() {}
};
/*
class {{derived-class-name}}:{{visibility-mode}} {{base-class-namespace name}}
{
    class members/methods/etc..
}

int main(){
    return 0;
}
*/
// creating a programmer class derived from employee base class
class Programmer::Employee
{
public:
    Programmer(int inpid)
    {
        id = inpid;
    }
    int languagecode = 9;
};
int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary;
    cout << rohan.salary;
    Programmer skillF(1);
    cout << skillF.languagecode;
    return 0;
}