#include<iostream>
using namespace std;

inline int product(int a,int b){
   return a*b;
}
float moneyReceived(int currentMoney,float factor=1.04){
   return currentMoney*factor;
}
int main(){
    int a,b;
    //cout<<"Enter value of a and b:"<<endl;
    //cin>>a>>b;
    int money=10000;
    cout<<"if you have"<<money<<"in your bank account,you will received"<<moneyReceived(money,1.1)
    <<"rs after 1 yr";
    return 0;


}