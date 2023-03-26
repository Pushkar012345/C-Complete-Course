//Example of function templates in c++
#include<iostream>
using namespace std;

template<typename T>
T myMax(T x,T y){
    return x>y ? x:y;
}
int main(){
    cout<< myMax<int>(3,4)<<endl;
    cout<<myMax<float>(3.0,7.0)<<endl;
    cout<<myMax<char>('c','h');
    return 0;


}