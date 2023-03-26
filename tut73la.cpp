//maps in c++ STL
#include<iostream>
#include<map>
#include<string>
using namespace std;

//map is an associative array
int main(){
    map<string,int> marksMap;
    marksMap["Harry"]=98;
    marksMap["jack"]=96;
    marksMap["rohan"]=2;
    
    //to insert
    marksMap.insert({{"Ram",22},{"sham",3}});
    //to print this will make new iterator
    map<string,int>::iterator iter;
    for(iter=marksMap.begin();iter!=marksMap.end();iter++){
        //here first get key and second get value
        cout<<(*iter).first<<""<<(*iter).second<<"\n";
        //here(*iter) point to pair
        //first to key and second to value
    }
    cout<<"The size is:"<<marksMap.size()<<endl;
    cout<<"The max size is:"<<marksMap.max_size()<<endl;
    cout<<"The empty return value is:"<<marksMap.empty()<<endl;




    return 0;
}