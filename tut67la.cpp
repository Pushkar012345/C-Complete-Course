//function templates in c++
#include<iostream>
using namespace std;

float funcAverage(int a,int b ){
    float avg=(a+b)/2.0;
    return avg;
}

float funcAverage2(int a,float b ){
    float avg=(a+b)/2.0;
    return avg;
}

int main(){
    float a;
    a=funcAverage2(5,2.4);
    printf("The average of this no is %.3f",a);
    return 0;
}