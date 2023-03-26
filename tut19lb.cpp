#include<iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}
int sum(int a,int b,int c){
    return a+b+c;
}
//calculate volume of cylinder
int volume(double r,int h){
    return (3./14 *r *r *h);
}
//calculate volume of cube:
int volume(int a){
    return(a*a*a);
}
//Rectangular box
int volume(int l,int b,int h){
    return(l*b*h);
}
int main(){
    cout<<"The volume of cube is:"<<volume(3)<<endl;
    return 0;
}