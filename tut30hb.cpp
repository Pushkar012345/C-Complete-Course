#include<iostream>
using namespace std;

class Point{
    int a,b;
    public:
    Point(int,int);
    void displayPoint(){
        cout<<"your point is"<<a<<","<<b<<endl;
    }
};
Point::Point(int x,int y){
    a=x;
    b=y;
}
int main(){
    Point p(3,4);
    p.displayPoint();
    Point q(5,6);
    q.displayPoint();
    return 0; 

}
