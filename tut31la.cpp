#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int);
    complex(int);
    void printNumber()
    {
        cout << "The number is" << a << "+" << b << "i" << endl;
    }
};
complex::complex(int x, int y)
{
    a = x;
    b = y;
}
complex::complex(int x){
    a=x;
    b=0;
}
int main()
{
    complex c1(4,6);
    c1.printNumber();

    complex c2(5);
    c2.printNumber();
    return 0;
}