#include<iostream>
using namespace std;

int count=0;
class num{
    public:
    //for calling constructor
    num(){
        count++;
        cout<<"This is time when constructor is called for object number"<<count<<endl;
    }
    ~num(){
        cout<<"This is the time when destructor is called for object number"<<count<<endl;
        count--;
    }
};
int main(){
    cout<<"Entering into main function";
    cout<<"Creating first object n1";
    num n1;
    {
        cout<<"Entring this block"<<endl;
        cout<<"creating two more objects"<<endl;
        num n2,n3;
        cout<<"exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;

}