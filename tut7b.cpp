#include<iostream>
using namespace std;

int main(){
    float d=34.3F;
    long double e=34.3l;

    cout<<"The value of 34.4 is:"<<sizeof(34.4)<<endl;
    cout<<"The value of 34.4F is:"<<sizeof(34.4F)<<endl;
    cout<<"The value of 34.4f is:"<<sizeof(34.4f)<<endl;
    cout<<"The value of 34.4L is:"<<sizeof(34.4L)<<endl;
    cout<<"The value of 34.4l is:"<<sizeof(34.4l)<<endl;
    return 0;
}