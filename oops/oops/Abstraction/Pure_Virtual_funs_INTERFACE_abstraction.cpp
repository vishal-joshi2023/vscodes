#include<iostream>
using namespace std;

//abstract class (containing pure Virtual funs)
class Phone
{
   private:
          string number;
          string IMEI;
    public:
          void setNumber(string number) { this->number = number; } 
          void setIMEI(string IMEI) { this->IMEI = IMEI; } 
          
          string getNumber() {return number;}
          string getIMEI() { return IMEI; } 

          virtual void screenSize(float) = 0;
          virtual void screenType(string) = 0;
          virtual void refreshRate(int)  = 0;
          virtual void OS(string) = 0;
          virtual void support5G(bool) = 0;             
};

class Google : public Phone
{
  private:  
       int AndroidV;
       float sSize;
       int rR;
       bool supportFor5G;
       string os;
       string model;
       string sType;

  public:

  Google(){};
  Google(int version,string model,string number,string IMEI) 
  : AndroidV(version),model(model)
  {
      Phone::setNumber(number);
      Phone::setIMEI(IMEI);
  }

  //implementation of virtual fun
  void screenSize(float sSize) { this->sSize = sSize; }
  void refreshRate(int rR) { this->rR = rR; }
  void support5G(bool supportFor5G) { this->supportFor5G = supportFor5G; }
  void OS(string os) { this->os = os; }
  void screenType(string sType) { this->sType = sType; }
   
  void aboutPhone()
  {
      cout<<"Phone Number     : "<<getNumber()<<endl;
      cout<<"Phone IMEI       : "<<getIMEI()<<endl;
      cout<<"Operating System : "<<os<<endl;
      cout<<"Android Version  : "<<AndroidV<<endl;
      cout<<"Model Name       : "<<model<<endl;
      cout<<"Screen Size      : "<<sSize<<endl;
      cout<<"Screen Type      : "<<sType<<endl;
      cout<<"Refresh Rate     : "<<rR<<endl;
      cout<<"5G Support       : "<<supportFor5G<<endl;
  } 

};

int main()
{
    Google g(12,"Pixel 6pro","8290238052","123456754322");
    g.OS("Android");
    g.refreshRate(120);
    g.support5G(true);
    g.screenType("Amoled");
    g.screenSize(6.5);

    g.aboutPhone();
    return 0;
}