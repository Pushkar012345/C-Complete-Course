#include<iostream>
using namespace std;

class Point
{
    int x;
    int y;
    public:
    Point(int i,int j):x(i),y(j)
    {


    }
    int getX() const{
        return x;
    }
    int getY() const{
        return y;
    }

};
int main(){
    Point p1(2,3);
    cout<<"x is:"<<p1.getX();
    cout<<"y is:"<<p1.getY();
    return 0;
}
