//Example of static function
#include<iostream>
using namespace std;

 int product(int a,int b){
    static int c=0;//This executes only once and dont use static f with inline f.
    c=c+1;//this time this f will run and value of c will be retained
    return a*b+c;
}
int main(){
    int a,b;
    cout<<"The value of a and b is:"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is:"<<product(a,b);
    cout<<"The product of a and b is:"<<product(a,b);
    cout<<"The product of a and b is:"<<product(a,b);
    cout<<"The product of a and b is:"<<product(a,b);
    cout<<"The product of a and b is:"<<product(a,b);
    cout<<"The product of a and b is:"<<product(a,b);
    cout<<"The product of a and b is:"<<product(a,b);
    cout<<"The product of a and b is:"<<product(a,b);


    cout<<"The product of a and b is:"<<product(a,b);
    cout<<"The product of a and b is:"<<product(a,b);
    cout<<"The product of a and b is:"<<product(a,b);
    return 0;
}