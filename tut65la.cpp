#include<iostream>
using namespace std;

//class template with multiple parameters
//template<class T1,class T2>...(comma seperated)


//This line tells that there r some data types which i will specify later while making object.
//for now u call it T1,T2 and assuming that made whole class
//t1 t2 can be any data type
//once u made template then u decide what to take t1 te by object
//
template<class T1,class T2>
class myClass{
    public:
    T1 data1;
    T2 data2;

    myClass(T1 a,T2 b){
        data1=a;
        data2=b;
    }

    void display(){
        cout<<this->data1<<endl<<this->data2;
    }
};


int main(){
    //here t1 takes int and t2 takes float and here program works as it is even u write char 
    //and float above
    //in place of t1 nad t2
    //here u get luxury that int and float u specify by making only one template
    //u can make char char,float float etc many
    //here u get luxury
    //here by keeping commaa seperated u can add many custom data types
    //
    myClass<int,float> obj(1,1.8);
    obj.display();
    return 0;

    //mading 2 array 1 interger and one floating point array
    //so can i give more data types

    //template<class T1,class T2>
    //class nameOfClass{
        //body

    }
