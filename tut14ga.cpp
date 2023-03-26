//Example of struct on gfg
#include <iostream>
using namespace std;

struct gfg{
    int g1;
    char g2;
    float g3;
};
int main(){
    struct gfg Geeks;
    Geeks.g1=20;
    Geeks.g2='a';
    Geeks.g3=3.12;
    cout<<"the value of Geeks.g1 is:"<<Geeks.g1<<endl;
    return 0;


}