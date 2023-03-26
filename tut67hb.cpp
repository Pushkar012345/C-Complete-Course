//To make fuctions generic we will use function templates
#include<iostream>
using namespace std;

//to made swapp function:
template<class T>
void swapp(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}

template<class T1,class T2>
float funcAverage(T1 a,T2 b){
    float avg=(a+b)/2;
    return avg;
}

int main(){
    float a;
    float b;
    a=funcAverage(3.8,4.0);
    cout<<"The value of a is:"<<a<<endl;
    int x=3,y=4;
    swapp(x,y);
    cout<<x<<endl<<y<<endl;
    return 0;
}