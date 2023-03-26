#include<iostream>
using namespace std;

int main(){
    //cout<<"This is Tuotrial 9:";
    int age;
    cout<<"Tell me you age:"<<endl;
    cin>>age;
    if((age<18)&&(age>0)){
        cout<<"You cannot come to my party"<<endl;
    }
    else if(age==18){
        cout<<"You are a kid and you will get a kid pass"<<endl;
    }
    else if(age<1){
        cout<<"You are not yet born"<<endl;
    }
    else{
        cout<<"You can come to my party"<<endl;
    }
    return 0;
    }
    
    
