#include<iostream>
using namespace std;

int main(){
    float Number1,Number2,
    sum,average;
    cout<<"Enter two Numbers:";
    cin >> Number1;
    cin >> Number2;

    sum = Number1 + Number2;
    average=sum/2;
    
    cout<<"sum ="<<sum<<"/n";
    cout<<"Average="<<average<<"/n";

    return 0;
}


