//Example of insert
#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    cout<<endl;
    

}
int main(){
    vector<int> vect1;
    int size,element;
    cout<<"The size of this vector is:"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter an element to add to this vector"<<endl;
        cin>>element;
        vect1.push_back(element);
    }
    display(vect1);
    vector<int>::iterator iter=vect1.begin();
    vect1.insert(iter+1,566);
    display(vect1);
    return 0;

}