#include <iostream>
using namespace std;

class student
{
protected:
    int roll_Number;

public:
    void set_roll_Number(int);
    void get_roll_Number(void);
};
void student::set_roll_Number(int r)
{
    roll_Number = r;
}
void student::get_roll_Number()
{
    cout << "Roll no is:" << roll_Number;
}

class Exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam::get_marks()
{
    cout << "The marks obtained are" << maths << endl;
    cout << "The marks obtained are" << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        get_roll_Number();
        get_marks();
        cout << "Your percentage is:" << (maths + physics) / 2 << endl;
    }
};

int main()
{
    Result harry;
    harry.set_roll_Number(420);
    harry.get_marks(94.0, 90.0);
    harry.display();
    return 0;
}