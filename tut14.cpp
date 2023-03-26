#include<iostream>
using namespace std;

 typedef struct employee
{
    int eId;
    int favChar;
    float salary;
}ep;

int main(){
    ep harry;
    harry.eId=1;
    harry.favChar='c';
    harry.salary =100000;
    cout<<harry.salary<<endl;
    cout<<harry.eId<<endl;
    return 0;
}
