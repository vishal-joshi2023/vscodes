#include<iostream>
#include<string.h>
using namespace std;
string funX();
char* funChar();

//auto keyword
void funC()
{
    
    int i = 9;
    float f = 10.0f;
    char c = 'a';
    string s = "hello";
    int *ptr = &i;

/*** Advantages  ***/
//1. this is auto = automatically deducted type
    auto a1 = i;
         //a1 = f;
         //a1 = c;
         //a1 = s;
         //a1 = &i;

 //2.     
    auto str = funX();
    cout<<str; 
 //3. for(auto &:vector<>)
 //4. for(auto it = v.begin();) -> instide of vector<int>* it = auto

/************************************************/

     //disadvantages

auto str1 = funX(); //ok 
auto str2 = funChar(); //ok
//here if we change api returnType then we dont have to change client side

//here is the catch
int len =  str1.size(); //work fine

//gives error if another functionality is relly on specific aip return type (it breaks the code)   
int len =  str2.size(); 

}

//APIs
string funX(){ return "by cherno"; }
char* funChar(){ return "by cherno"; }

int main()
{
    funC();    
    return 0;
}