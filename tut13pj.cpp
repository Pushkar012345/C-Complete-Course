//The elements are stored at contiguous memory locations Example:-
#include<iostream>
using namespace std;

int main(){
    int arr[3]={1,2,3};
    cout<<"the size of integer in this compiler is"<<sizeof(int)<<endl;

    for(int i=0;i<5;i++){
        cout<<"The address of ["<< i <<"] is "<<&arr[i]<<endl;
    }
    return 0;
}