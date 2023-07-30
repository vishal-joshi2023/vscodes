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
     int quality=0;  
   
   public:
     
     channel(string name,string owner ,int pass){ this->name = name; creator = owner; pwd = pass; }
     
     void subscribe(){ subs+=1; }
     
     void qualityAnalytics() { 
        quality = subs;
        if(2*quality>10) cout<<"Great Quality ***"<<endl;
        else cout<<"Poor Quality **"<<endl;
      }

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
           for(auto p : pl)   cout<<p<<endl; 
         }
      
};

class TechChannel : public channel{

  public:

     TechChannel(string ch_name, string owner,int pwd) : channel(ch_name,owner,pwd){}    
     //run time poly
     void status(){ cout<<name<<" is online..."<<endl; }


};

class NonTechChannel : public channel{

  public:

     NonTechChannel(string ch_name, string owner,int pwd) : channel(ch_name,owner,pwd){}    
     //run time poly
     void status(){ cout<<name<<" is Offline...!!"<<endl; }


};



int main(){
    TechChannel ch1("tech$fuck","vishal",00);
    NonTechChannel ch2("Noob","Darshan",00);

    vector<string> pl = {"as","oo","sd","okj"};     
    vector<string> pl2 = {"asa","oso","sds","osskj","hjj"};  

    for(int i=0;i<10;i++)
     ch1.subscribe();

    for(string s:pl)
      ch1.uplode(s,00); 

    for(string s:pl2)
      ch2.uplode(s,00);    
   
    //access through ptr
    channel *p1 = &ch1;
    channel *p2 = &ch2;
    
    ch1.status();
    ch1.getInfo();
    p1->qualityAnalytics();

    ch2.status();
    ch2.getInfo();
    p2->qualityAnalytics();


    return 0;
 }