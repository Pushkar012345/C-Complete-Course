//Example of struct on gfg
#include <iostream>
using namespace std;

 typedef struct gfg{
    int g1;
    char g2;
    float g3;
}ok;
int main(){
    ok Geeks;
    Geeks.g1=20;
    Geeks.g2='a';
    Geeks.g3=3.12;
    cout<<"the value of Geeks.g1 is:"<<Geeks.g1<<endl;
    return 0;


}