#include<iostream>
using namespace std;

class c2;
class c1{
    int val1;
    friend void exchange(c1 &,c2 &);
    public:
    void indata(int a){
        val1=a;
    }
    void displaydata(int a){
        cout<<val1<<endl;
    }


};
class c2{
    int val2;
    friend void exchange(c1 &,c2 &);
    public:
    void indata(int a){
        val2=a;
    }
    void displaydata(int a){
        cout<<val2<<endl;
    }


};
void exchange(c1 &x,c2 &y){
    int temp=x.val1;
    x.val1=y.val2;
    y.val2=temp;

}
int main(){
    c1 oc1;
    c2 oc2;
    oc1.indata(5);
    oc2.indata(9);
    exchange(oc1,oc2);

    cout<<"exhange 1:"<<endl;
    oc1.displaydata();
    cout<<"exhange 2:"<<endl;
    oc2.displaydata();
    return 0;
}