#include<iostream>
using namespace std;

class student
{
    protected:
    int roll_no;
    public:
    void set_no(int a){
        roll_no=a;
        }
    void print_no(){
        cout<<"roll no is:"<<roll_no<<endl;
    }
};
class Test:virtual public student
{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float m1,float m2){
        maths=m1;
        physics=m2;
    }
    void print_marks(void){
        cout<<"maths is:"<<maths<<endl;
        cout<<"Physics is:"<<physics<<endl;
    }
};

class sports:virtual public student{
    protected:
    int score;
    public:
    void set_score(int sc){
        score=sc;
    }
    void print_score(){
        cout<<"score is:"<<score<<endl;
    }

};
class Result:public Test,public sports{
    private:
    float total;
    public:
    void display(void){
        total=maths+physics+score;
        print_no();
        print_score();
        print_marks();
        cout<<"total is:"<<total<<endl;
    }


};
int main(){
    Result harry;
    harry.set_no(30);
    harry.set_score(10);
    harry.set_marks(10,20);
    harry.display();
    return 0;


}