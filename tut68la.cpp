//Member function templates and overloading template functions in c++
//here i have made such class which will follow above template i.e
//template<class T>
//if write int at T,we get int etc

#include<iostream>
using namespace std;

template<class T>
class Harry{
    public:
    T data;
    Harry(T a){
        data=a;

    }
    void display();  

};

template<class T>
void Harry<T>::display(){
    cout<<data;


}

int main(){
    Harry<float> h(5.7);
    cout<<h.data<<endl;
    h.display();
    return 0;
}