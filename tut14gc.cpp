//Example of Union
#include<iostream>
using namespace std;

union Gfg{
    int Geek1;
    char Geek2;
    float Geek3;

};
int main(){
    union Gfg G1;
    G1.Geek1=32;
    G1.Geek2=32;
    cout<<"first is:"<<endl;
    cout<<G1.Geek1<<endl;
    cout<<"Second is:"<<endl;
    cout<<G1.Geek2<<endl;
    return 0;


}