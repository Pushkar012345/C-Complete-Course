#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH(string s,float r){
        title=s;
        rating=r;
    }
     void display(){
        cout<<"bogus code"<<endl;

    }

};

class CWHvideo:public CWH
{
    float videolength;
    public:
    //This constructor will call base class constructor with s and r
        CWHvideo(string s,float r,float vl):CWH(s,r){
            //now setting vl
            videolength=vl;
        }
        void display(){
            cout<<"This is an amazing video with title"<<title<<endl;
            cout<<"Rating:"<<rating<<"out of 5 stars"<<endl;
            cout<<"videolength of video is:"<<videolength<<endl;
        }
};
class CWHtext:public CWH
{
    int words;
    public:
    //This constructor will call base class constructor with s and r
        CWHtext(string s,float r,int wc):CWH(s,r){
            //now setting vl
            words=wc;
        }
        void display(){
            cout<<"This is an amazing video text with title"<<title<<endl;
            cout<<"Rating of this text tutorial is:"<<rating<<"out of 5 stars"<<endl;
            cout<<"no of words in this text tutorial is:"<<words<<endl;

            
        }

};

int main(){
    string title;
    float rating,vlen;
    int words;
    //for code with harry video
    title="Django tutorial";
    vlen =4.56;
    rating = 4.89;
    CWHvideo djVideo(title,rating,vlen);
    djVideo.display();

    //for code with harry text
    title="Django tutorial textual";
    words =433;
    rating = 4.19;
    CWHtext djText(title,rating,vlen);
    djText.display();

    CWH* tuts[2];
    tuts[0]=&djVideo;
    tuts[1]=&djText;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}