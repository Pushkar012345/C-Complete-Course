#include<iostream>
using namespace std;

 typedef struct employee{
    int eId;
    char favChar;
    float salary;
}ep;
 int main(){
    ep harry;
    harry.eId=333;
    harry.favChar='c';
    harry.salary=1;
    cout<<"Harry eid is:"<<harry.eId<<endl;
    return 0;
}