#include<iostream>
using namespace std;

class Test{
    int const t;
    public:
    Test(int t):t(t){

    }
    int getT (){
        return t;
    }

};
int main(){
    Test t(20);
    cout<<"t1 is:"<<t.getT();
    return 0;
}