#include<bits/stdc++.h>
using namespace std;

class channel{
  

   private:
         int subs=0;
         string channelName;
         int password;
         vector<string> playList_Names; 

   public:
         
         channel(){  }
         
         void subscribe(){ subs+=1; }

         void unsubscribe() {
            if(subs>0) { subs-=1; }
            else cout<<"NOT POSSIBLE"<<endl;
         }

         void makeChannel(string name, int pass){ channelName = name; password = pass; }
         
         void uplode(string video,int pass) { 
            if(password==pass)
              playList_Names.push_back(video);
            else cout<<"Invalid Password"<<endl;
         }

         void getInfo()
         {
           cout<<"Channel name     : "<<channelName<<endl;
           cout<<"Subscribers      : "<<subs<<endl;
           cout<<"Playlist content : "<<endl;
           for(auto pl : playList_Names)
             cout<<pl<<endl; 

            cout<<"........"<<endl; 
         }
};



int main(){
 vector<string> pl = {"as","oo","sd","okj"};     
 channel ch1,ch2;
 ch1.makeChannel("tech$fuck",0000);
 
 for(int i=0;i<10;i++)
 ch1.subscribe();

 for(string s:pl)
    ch1.uplode(s,0000); 

ch1.getInfo();    

 return 0;
 }