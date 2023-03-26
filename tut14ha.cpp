#include<iostream>
using namespace std;

struct employee{
    int eId;
    char favChar;
    float salary;
};
 int main(){
    struct employee harry;
    harry.eId=333;
    harry.favChar='c';
    harry.salary=1;
    cout<<"Harry eid is:"<<harry.eId<<endl;
    return 0;
}