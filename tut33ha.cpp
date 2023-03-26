#include<iostream>
using namespace std;

class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
    BankDeposit(){}
    BankDeposit(int P,int y,float r);
    BankDeposit(int P,int y,int r);
    void show();
};
BankDeposit::BankDeposit(int P,int y,float r){
  principal=P;
  years=y;
  interestRate=r;
  returnValue=principal;
  for(int i=0;i<y;i++){
    returnValue=principal*(1+interestRate);
  }
}

BankDeposit::BankDeposit(int P,int y,int r){
  principal=P;
  years=y;
  interestRate=float(r)/100;
  returnValue=principal;
  for(int i=0;i<y;i++){
    returnValue=principal*(1+interestRate);
  }
}
void BankDeposit::show(){
    cout<<"The principal amount"<<principal<<"after"<<years<<"years is"<<returnValue<<endl;
    
}
int main(){
 BankDeposit bd1,bd2,bd3;
 int P;
 int y;
 float r;
 int R;

 cout<<"Enter the value of P,y and r"<<endl;
 cin>>P>>y>>r;
 bd1=BankDeposit( P, y,r);
 bd1.show();

 cout<<"Enter the value of P,y and R"<<endl;
 cin>>P>>y>>R;
 bd1=BankDeposit( P, y,R);
 bd1.show();

 return 0;
}


