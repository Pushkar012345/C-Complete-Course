//normal c++ program used to calculate average of two numbers in c++
#include<iostream>
#include<stdio.h>
using namespace std;

 float funcAverage(int a,int b){
    float avg=(a+b)/2.0;
    return avg;
}

int main(){
    float a;
    a=funcAverage(3,2);
    printf("The average value is %3f",a);