//second example of function overloading:
#include<iostream>
using namespace std;

//volume of cube
int volume(int a){
    return (a*a*a);
}
//now we will calculate colume of cylinder
int volume(double r,int h){
    return (3.14*r*r*h);
}
//now we will calculate volume of rectangular
int volume(int l,int b,int h){
    return (l*b*h);
}
int main(){
    cout<<"the volume of cube with side 3 is:"<<volume(3)<<endl;
    cout<<"The volume of rectangulat with 3,2,1 is:"<<volume(3,2,1)<<endl;
    return 0;
}