#include<bits/stdc++.h>
using namespace std;

class channel{
   public:
         int id;
         int views;
         int no_of_videos ;
         string channelName;
         vector<string> playList_Names;
};

int main(){
 channel ch;
 ch.id = 1;
 ch.views = 100;
 ch.no_of_videos = 10;
 ch.channelName = "vishal joshi";
 ch.playList_Names.push_back("playlist_1");
 ch.playList_Names.push_back("playlist_2");
 ch.playList_Names.push_back("playlist_2");

 cout<<ch.id<<"\n"<<ch.views<<"\n"<<ch.no_of_videos<<"\n"<<ch.channelName<<endl;

 for(auto pl : ch.playList_Names)
   cout<<pl<<endl;
   
 return 0;
 }