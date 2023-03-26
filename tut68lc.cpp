//Now to overload function:
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
//****************Now to overload**************************************
//now if i made this function as function template,then i now overload this function,
//i.e i made template and overload also
void func(int a){
    cout<<"I am first func()"<<a<<endl;
}
//now i am templatizing this,now if i made it as f template then i overloaded this
//as i have made f and template also
template<class T>
void func(T a){
    cout<<"I am templatized function"<<a<<endl;
}



int main(){
    //Harry<char> h('c');
    //cout<<h.data<<endl;
    //h.display();
    //now if i call func it will be confused to which call out of 2
    //upper is exact match
    //and below can made exact match with help of template
    func(4); //Exact match takes highest priority
    

    return 0;
}