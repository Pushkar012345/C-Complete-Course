//Example of virtual keyword in c++
#include<iostream>
using namespace std;

class CWH{
    protected:
    string title; 
    float rating;

    CWH(string s,float r){
        title=s;
        rating=r;
    }
    public:
    virtual void display()=0;
};

class CWHVideo:public CWH{
    public:
    float videolength;
    CWHVideo(string s,float r,float vl):CWH(s,r)
    {
        videolength=vl;
    }
    void display(){
       cout<<"This is video tutorial with title"<<title<<endl;
        cout<<"Rating:"<<rating<<endl;
        cout<<"The length of the video is:"<<videolength<<endl;
    }
};
class CWHwords:public CWH{
    public:
    int words;
    CWHwords(string s,float r,int wc):CWH(s,r)
    {
        words=wc;
    }
    void display(){
        cout<<"This is word tutorial with title"<<title<<endl;
        cout<<"Rating of this word tutorial is:"<<rating<<endl;
        cout<<"The length of the word tutorial is:"<<words<<endl;
    }
};



int main(){
    string title; 
    float rating;
    float vl;
    int words;

    //making for video tutorial:
    title ="CWHvideo";
    rating=5.6;
    vl=4.5;
    CWHVideo djVideo(title,rating,vl);

    //making for word tutorial:
    title="CWHword";
    rating=4.5;
    words=455;
    CWHwords djwords(title,rating,words);

    //making pointer:
    CWH* tuts[2];
    tuts[0]= &djVideo;
    tuts[1]= &djwords;

    tuts[0]->display();
    tuts[1]->display();
    return 0;



    



}
