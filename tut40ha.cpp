#include<iostream>
using namespace std;

class student{
    protected:
    int roll_Number;

    public:
    void set_roll_Number(int);
    void get_roll_Number(void);
};
void student::set_roll_Number(int r){
    roll_Number=r;
}
void student::get_roll_Number(){
    cout<<"Roll no is:"<<roll_Number<<endl;
}

class Exam:public student{
    protected:
    float maths;
    float physics;
    
    public:
    void set_Marks(float,float);
    void get_Marks(void);
};
void Exam::set_Marks(float m1,float m2){
    maths=m1;
    physics=m2;
}
void Exam::get_Marks(){
    cout<<"Marks of maths and physics are"<<maths<<","<<physics<<endl;
}

class Result:public Exam{
    
    float percentage;

    public:
    void display(){
    get_roll_Number();
    get_Marks();
    cout<<"The percentage is:"<<(maths+physics)/2<<endl;
    }
};
int main(){
    Result harry;
    harry.set_roll_Number(30);
    harry.set_Marks(12.0,19.0);
    harry.display();
    return 0;

}


