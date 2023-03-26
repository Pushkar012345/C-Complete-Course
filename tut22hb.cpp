#include<iostream>
using namespace std;

class binary{
    private:
    string s;
    void chk_binary(void);

    public:
    void read(void);
    void ones_complement(void);
    void display(void);

};
void binary::read(void){
    cout<<"Enter a binary:"<<endl;
    cin>>s;
}

void binary::chk_binary(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!= '0' && s.at(i)!= '1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }


    }
}

void binary::ones_complement(void){
    chk_binary();
    cout<<"ones complement is:"<<endl;
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else
        {
           s.at(i)='0';
        }
    }
}
 void binary::display(void){
    cout<<"displaying your binary no:"<<endl;
    for(int i=0;i<s.length();i++){
    
    cout<<s.at(i)<<endl;
    }
    
 }
 int main(){
    binary b;
    b.read();
    b.display();
    b.ones_complement();
    b.display();
    return 0;
 }
