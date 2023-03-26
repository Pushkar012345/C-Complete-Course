//c++ program on dques
#include<deque>
#include<iostream>


using namespace std;

void showdq(deque<int> g){
    deque <int>::iterator it;
    for(it=g.begin();it!=g.end();it++){
        cout<<*it<<endl;
    }
    cout<<endl;
}
int main(){
    deque<int> gquiz;
    gquiz.push_back(10);
    gquiz.push_front(20);
    gquiz.push_back(5);
    gquiz.push_front(6);
    //cout<<"deque quiz is:"<<showdq(gquiz);


}
