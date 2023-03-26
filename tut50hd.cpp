//Example program for pointer array and use of new keyword with an array is:
#include<iostream>
using namespace std;

int main(){
    int *arr=new int[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    cout<<"The value at arr[0] is:"<<arr[0]<<endl;
    cout<<"The value at arr[1] is:"<<arr[1]<<endl;
    cout<<"The value at arr[2] is:"<<arr[2]<<endl;
    return 0;


}