#include<iostream>
using namespace std;

int main(){
    int marks[5]={1,2,3,4,5};
    int *p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    return 0;
}