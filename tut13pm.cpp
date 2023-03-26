//Example of array name as pointers
#include<iostream>
using namespace std;

int main(){
    int arr[3]={1,2,3};
    int *ptr;
    ptr=arr;
    cout<<ptr[0]<<endl;
    cout<<ptr[1]<<endl;
    cout<<ptr[2]<<endl;
    cout<<ptr[0]<<endl;
    return 0;

}