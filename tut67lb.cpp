//Function templaes
//To not make such much function i will make here function templates:
//in such a way you can apply concepts of template in functions also.
#include<iostream>
using namespace std;




template<class T1,class T2>
float funcAverage2(T1 a,T2 b){
    float avg=(a+b)/2.0;
    return avg;
}

int main(){
    float a;
    a=funcAverage2(5,2.8);
    cout<<"The average of this numbers is:"<<a<<endl;
    return 0;

}