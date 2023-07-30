#include<iostream>
using namespace std;

class YouTubeChannel{
     //making data private 
     private:
        string name;
        int subscribers=0;
        int views=0;
        int likes=0;
        int dislikes = 0;

      public:
          YouTubeChannel(){}
          YouTubeChannel(string name) : name(name) {}

          //allow specific members to modify data
          void subscribe(){this->subscribers++;}
          void unsubscribe(){ if(this->subscribers > 0)this->subscribers--;}
          
          void like(){this->likes++; this->views++;}
          void dislike(){this->dislikes++; this->views++;}

          void details()
          {
              cout<<"Channel Name : "<<this->name<<endl;
              cout<<"subscribers  : "<<this->subscribers<<endl;
              cout<<"Views        : "<<this->views<<endl;
              cout<<"Likes        : "<<this->likes<<endl;
              cout<<"Dislikes     : "<<this->dislikes<<endl;
          }

};

int main()
{ 
    YouTubeChannel youTubeChannel1("TechX");
    int i=10;
    int j=111;

    while(i--)
       youTubeChannel1.subscribe();
    
    youTubeChannel1.like();
    youTubeChannel1.like();
    youTubeChannel1.like();
    youTubeChannel1.dislike();
    
    while(j--)
        youTubeChannel1.unsubscribe();
    

    youTubeChannel1.details();

    return 0;
}