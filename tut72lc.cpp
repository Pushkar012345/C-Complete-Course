//Use of pop_front()
#include<iostream>
#include<list>

using namespace std;

void display(list<int> &lst){
    list<int>:: iterator it;
    for(it=lst.begin();it!=lst.end();it++){
        cout<<*it<<endl;
    }
    cout<<endl;



}
int main(){
    list<int> list1; //list of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    display(list1);
    list1.pop_front();
    display(list1);

    //Empty list of size 3
    list<int> list2(3);
    list<int>:: iterator iter;
    iter=list2.begin();
    *iter=45;
    iter++;
    *iter=3;
    iter++;
    *iter=4;
    iter++;
    display(list2);
    return 0;


    



}