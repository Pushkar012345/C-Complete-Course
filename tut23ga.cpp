#include<iostream>
using namespace std;

class product{
    int code,quantity;
    int price;

    public:
    void setData(void);
    void Printdata(void);
};
int main(){
    product p1,p2;
    cout<<"memory allocation for p1 is:"<<sizeof(p1)<<endl;
    cout<<"memory allocation for p2 is:"<<sizeof(p2)<<endl;
    return 0;
}
