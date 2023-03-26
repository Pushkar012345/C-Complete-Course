//example of functional objects
#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main(){
    int arr[]={2,7,6,54,5};
    //sort(arr,arr+4);
    sort(arr,arr+5,greater<int>());
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
    
}