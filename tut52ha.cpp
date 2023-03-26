#include<iostream>
using namespace std;

class ShopItem{
    int id;
    float price;
    public:
    void setdata(int a,int b){
        id=a;
        price=b;
    }
    void getData(){
        cout<<"Id is:"<<id<<endl;
        cout<<"price is:"<<price<<endl;
    }
};
int main(){
    int size=3;
    ShopItem *ptr=new ShopItem[size];
    ShopItem *ptrTemp=ptr;
    int p;
    float q;
    int i;
    for(i=0;i<size;i++){
        cout<<"Enter id and price of item:"<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(3,4);
        ptr++;
    }
    for(i=0;i<size;i++){
        cout<<"enter no of item"<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    return 0;
}