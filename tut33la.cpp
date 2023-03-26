#include<iostream>
using namespace std;

class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
    BankDeposit(){}
    BankDeposit(int p,int y,float r);
    BankDeposit(int p,int y,int r);
    void show();


};
BankDeposit::BankDeposit(int p,int y,float r){
    principal=p;
    years=y;
    interestRate=r;
    returnValue=principal;
    for(int i=0;i<y;i++){
        returnValue=returnValue*(1+interestRate);
    }
}
BankDeposit::BankDeposit(int p,int y,int r){
    principal=p;
    years=y;
    interestRate=float(r)/100;
    returnValue=principal;
    for(int i=0;i<y;i++){
        returnValue=returnValue*(1+interestRate);
    }
    
}
void BankDeposit::show(){
    cout<<endl<<"Principal amount was"<<principal<<endl
    <<"Return value after"<<years<<"is"<<returnValue<<endl;
}
int main(){
    //BankDeposit bd1,bd2,bd3;
    int P,y;
    float r;
    int R;

    cout<<"Enter the value of P ,y and r"<<endl;
    cin>>P>>y>>r;
    BankDeposit bd1=BankDeposit(P,y,r);
    bd1.show();
    

    cout<<"Enter the value of P ,y and R"<<endl;
    cin>>P>>y>>R;
    BankDeposit bd2=BankDeposit(P,y,R);
    bd2.show();
    return 0;
}
