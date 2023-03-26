//Example of default argments in c++
#include<iostream>
using namespace std;

float moneyReceived(int currentMoney,float factor=1.05){
    return(currentMoney*factor);

}
int main(){
    int money=1000;
    cout<<"If you have"<<money<<"in your bank account,you will received"<<moneyReceived(money)<<"after 1 yr"<<endl;
    cout<<"If you have"<<money<<"in your bank account,you will received"<<moneyReceived(money,1.22)<<"after 1 yr"<<endl;
    return 0;
}