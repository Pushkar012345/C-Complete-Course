
//This video will cover vectors
#include<iostream>
#include<vector>

using namespace std;

//here taken reference of integer vector
void display(vector<int> &v){
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"";



    }
    cout<<endl;
}
//here i can make float also and template function also.
int main(){
    vector<int> vect1;
    int element,size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter an element to add to this vector:";
        cin>>element;
        vect1.push_back(element);

    }
    cout<<endl;
    display(vect1);
    return 0;
}