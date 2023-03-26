//look now how to make vectors:
//This video will cover vectors
#include<iostream>
#include<vector>

using namespace std;
template<class T>
//here taken reference of integer vector
void display(vector<T> &v){
    cout<<"Displaying this vector"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"";
        cout<<v.at(i)<<"";



    }
    cout<<endl;
}
//here i can make float also and template function also.
int main(){
    //ways to create a vector
    vector<int> vect1;//0 length integer vector
    vector<char> vect2(4);//4-element charactor vector
    vector<char> vect3(vect2);//4-element charactor vector from vect 2
    vector<int> v(6,3);//6-element vector of 3's
    vect2.push_back('5');
    display(vect2);

    int element,size=5;
    //cout<<"Enter the size of your vector"<<endl;
    //cin>>size;
    //for(int i=0;i<size;i++)
    //{
    //    cout<<"Enter an element to add to this vector:";
    //    cin>>element;
    //    vect1.push_back(element);
//
    //}
    //cout<<endl;
    //it tells 1 time remove it.
    //vect1.pop_back();

    //display(vect1);
    //vector<int>::iterator iter=vect1.begin();
    //vect1.insert(iter+1,566);
    //display(vect1);
    return 0;
}