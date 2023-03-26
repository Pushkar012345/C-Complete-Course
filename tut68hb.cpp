//writing function outside the class
#include<iostream>
using namespace std;

template<class T>
class Harry{
    public:
    T data;
    Harry(int a){
        data=a;
    }
    void display();
};
template<class T>
void Harry<T>::display(){
    cout<<data<<endl;
};
int main(){
    Harry<int> h(3);
    h.display();
    return 0;

}

