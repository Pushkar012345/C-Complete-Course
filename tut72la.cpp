#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> list1;
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    list<int>:: iterator iter;
    //now this iterator will point to 1st element of list 1
    iter=list1.begin();
    //to know value of 1st element of list 1:
    cout<<*iter;
    //now i am pointing iter to next element and it is continuosly printing it.
    iter++;
    cout<<*iter<<"";
    iter++;
    cout<<*iter<<"";
    iter++;
    cout<<*iter<<"";
    


    return 0;
}