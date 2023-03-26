#include<iostream>
using namespace std;

class Point{
    private:
    int x,y;

    public:
    Point(int x1,int y1){
        x=x1;
        y=y1;
    }
    int getX(){
      return x;
    }
    int getY(){
        return y;
    }



};
int main(){
    Point P1(10,15);
    P1.getX();
    P1.getY();
    return 0;
}