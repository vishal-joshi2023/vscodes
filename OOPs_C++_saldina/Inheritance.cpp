#include<bits/stdc++.h>
using namespace std;

class channel{
   private:
     string creator;
     int subs=0;
     int pwd;
     vector<string> pl;

   protected :
     string name;   
   
   public:
     
     channel(string name,string owner ,int pass){ this->name = name; creator = owner; pwd = pass; }
     
     void subscribe(){ subs+=1; }

     void unsubscribe() {
        if(subs>0) { subs-=1; }
        else cout<<"NOT POSSIBLE"<<endl;
     }
        
         
     void uplode(string video,int pass) { 
        if(pwd==pass)
          pl.push_back(video);
        else cout<<"Invalid Password"<<endl;
     }

     void getInfo() {
           cout<<"Channel name     : "<<name<<endl;
           cout<<"Creator name     : "<<creator<<endl;
           cout<<"Subscribers      : "<<subs<<endl;
           cout<<"Playlist content : "<<endl;
           for(auto p : pl)
             cout<<p<<endl; 

            cout<<"........"<<endl; 
         }
      
};

class TechChannel : public channel{

  public:
     TechChannel(string ch_name, string owner,int pwd) : channel(ch_name,owner,pwd){}    
     
     void status(){ cout<<name<<" is online..."<<endl; }
};

int main(){
    TechChannel ch1("tech$fuck","vishal",00);

    vector<string> pl = {"as","oo","sd","okj"};     
    
    for(int i=0;i<10;i++)
     ch1.subscribe();

    for(string s:pl)
      ch1.uplode(s,00); 
    
    ch1.status();
    ch1.getInfo(); 
    return 0;
 }