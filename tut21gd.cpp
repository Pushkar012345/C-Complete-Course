#include<iostream>
using namespace std;

class Geek{
    public:
    string geekname;
    void printname(){
        cout<<"geekname is:"<<geekname<<endl;

    }
};
int main(){
    Geek obj;
    obj.geekname="Pushkar";
    obj.printname();
    return 0;
}