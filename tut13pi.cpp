//Example of no index out of bound checking
#include<iostream>
using namespace std;

int main(){
    int arr[5];
    cout<<arr[7]<<endl;
    cout<<arr[-1]<<endl;
    return 0;
}