#include<iostream>
using namespace std;

int sum(int x,int y,int z=0,int w=0){
    return (x+y+z+w);
}
int main(){
    int x,y,z,w;
    cout<<"The value of sum(3,4) is:"<<sum(3,4)<<endl;
    cout<<"the value of sum(3,4,5) is:"<<sum(3,4,5)<<endl;
   

    return 0;
}