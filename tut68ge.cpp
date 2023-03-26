//different data types using templates in c++
#include<iostream>
using namespace std;

template<class T>
class info{
    public:
    info(T A){
        cout<<"A="<<A<<"size of data in bytes"<<sizeof(A)<<endl;
    }
};

int main(){
    info<int> p(3);
    info<char> q('c');
    info<float> r(3.12);
    return 0;

}