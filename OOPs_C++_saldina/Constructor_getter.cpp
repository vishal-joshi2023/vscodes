#include<bits/stdc++.h>
using namespace std;

class channel{
   public:
         int id;
         int views;
         int no_of_videos ;
         string channelName;
         vector<string> playList_Names;
         
         channel(string name,int id,int views=0,int count=0){
           this->id = id;
           this->channelName = name;
           this->views = views;
           no_of_videos = count;
         }
         void getInfo()
         {
           cout<<channelName<<"\n"<<id<<"\n"<<no_of_videos<<"\n"<<views<<endl;
           for(auto pl : playList_Names)
             cout<<pl<<endl; 

            cout<<"........"<<endl; 
         }
};

int main(){
 channel ch("oops",1,0);
 ch.playList_Names.push_back("playlist_1");
 ch.playList_Names.push_back("playlist_2");
 ch.playList_Names.push_back("playlist_2");

 channel ch2("javaA",2,1000,15);
 ch2.playList_Names.push_back("a");
 ch2.playList_Names.push_back("b");
 ch2.playList_Names.push_back("c");
 
 ch.getInfo();
 ch2.getInfo();

 return 0;
 }