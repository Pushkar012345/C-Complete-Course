//to insert elements in c++ STL
//marksMap.insert({"ram",22},{"tom",34})
#include<iostream>
#include<map>
#include<string>
 
using namespace std;
 
int main(){
 
    // Map is an associative array
    map<string, int>  marksMap;
    marksMap["Atul"] = 58;
    marksMap["Rohit"] = 57;
    marksMap["Kishlay"] = 78;
    marksMap["Aditya"] = 65;
    marksMap["Sachin"] = 53;
    marksMap.insert({{"prasad",45},{"arya",46}});
    map<string,int> :: iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    cout<<"The size of marksMap is:"<<marksMap.size()<<endl;
    cout<<"The max_size() of marksMap is:"<<marksMap.max_size()<<endl;
    cout<<"The empty of marksMap is:"<<marksMap.empty()<<endl;
    return 0;

    
    
 
    return 0;
}
