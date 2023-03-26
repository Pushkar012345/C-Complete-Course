#include<iostream>
using namespace std;

class Geeks{
    public:
    string geekname;
    int geekid;
    void printname();
    void printid(){
        cout<<"id is:"<<geekid<<endl;
    }

};
void Geeks::printname(){
    cout<<"geekname is:"<<geekname<<endl;
}
int main(){
    Geeks obj;
    obj.geekname="ram";
    obj.geekid=12;
    obj.printname();
    obj.printid();
    return 0;





}
