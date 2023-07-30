#include <iostream>
using namespace std;
//Abstraction -> hiding complex logic/processing/funs. of a sys 
//behiend simple user friendly ui with imp. info only -> hiding complexity from end user
//acehived-> using adstract Classes -> ie. contantains at least 1 virtual fun.
//Obj/instance is not possible but can access pv_fun using ptr

//abstract class <- like contract  
class SmartPhone{
    public:
      virtual void TakeASelfie()=0;
      virtual void Gaming() = 0;
      virtual void DisplayFPS() =0;
};

class Android : public SmartPhone{
    public:
      void TakeASelfie(){
        cout<<"Android Phone Clicked Photo : Image Processing Is Hiding/Abstract \n";
      }
      void Gaming(){
        cout<<"Android Phone Gaming : AI Gaming Engine Is Hiding/Abstract \n";
      } 
      void DisplayFPS(){
        cout<<"Android Phone FPS : 165hz \n";
      }
};
class IPhone : public SmartPhone {
    public:
      void TakeASelfie(){
        cout<<"IPhone Phone Clicked Photo : Image Processing Is Hiding/Abstract \n";
      }
      void Gaming(){
        cout<<"IPhone Phone Gaming : AI Gaming Engine Is Hiding/Abstract \n";
      } 
      void DisplayFPS(){
        cout<<"IPhone Phone FPS : 120hz \n";
      }
};

int main(){
    SmartPhone* samsung = new Android();
    SmartPhone* iphone  = new IPhone();
    
    samsung->TakeASelfie();
    samsung->Gaming();
    samsung->DisplayFPS();

    iphone->TakeASelfie();
    iphone->Gaming();
    iphone->DisplayFPS();

    cout<<".........\n";
    Android realme;

    realme.TakeASelfie();
    realme.Gaming();
    realme.DisplayFPS();
    
    return 0;
}