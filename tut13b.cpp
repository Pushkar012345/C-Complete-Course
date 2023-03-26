include<iostream>
using namespace std;

int main(){
    int marks[4]={20,19,18,17};
    int mathMarks[4];
    mathMarks[0]=221;
    mathMarks[1]=222;
    mathMarks[2]=223;
    mathMarks[3]=224;
    

    marks[2]=333;
    cout<<"These are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    cout<<"These are mathmarks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;
    return 0;
}