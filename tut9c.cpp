//switch statements in c++:Selection control structure
#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;
    switch(age){
        case 18:
        cout<<"You are 18 years old";
        break;
        default:
        cout<<"You are not 18 years old";
        break;
}
}