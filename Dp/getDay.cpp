#include<bits/stdc++.h>
using namespace std;

bool leapYear(int year){
   // REM == 0 than Leap Year
   if (year % 400 == 0 | year % 100  == 0| year % 4 == 0 ) 
     return true;
   return false;
 }
int countOdd(int year, unordered_map<int,int> &cod){
    string YEAR = to_string(year);
    int century = stoi((YEAR.substr(0,2)+"00"));
    int y = stoi(YEAR.substr(2,4));
    
    int res = cod[century%400] + y + y/4;
    return res;
 }

int main() 
{ 
   int day   =20;
   int month = 4 ; 
   int year  =2033 ;
   
  vector<string> days{"Sunday","Monday","Tuesday","Wednesday","Thursday", "Friday","Saturday"};
  
  //odd days in century
  unordered_map<int,int> cod;
  cod[100]=5;
  cod[200]=3;
  cod[300]=1;
  cod[0]  =0;

  //odd days in monthly normal year
  unordered_map<int,int> mp;
  mp[1] = 3; 
  if(leapYear(year)) mp[2] = 1; //leap
  else mp[2] = 0;//nonleap

  mp[3] = 3;  mp[4] = 2;
  mp[5] = 3;  mp[6] = 2;
  mp[7] = 3;  mp[8] = 3;
  mp[9] = 2;  mp[10] = 3;
  mp[11] =2;  mp[12] = 3;
  
  
   // count odd days in preV year
   int preVOddDays = countOdd(year-1,cod);
   
   //count days of current year till month + currDays
   for(int i=1;i<month;i++){
      day += mp[i];
   }
    
   
   int dayOfWeek =   (preVOddDays+day) %7;

   cout<<days[dayOfWeek];
}
