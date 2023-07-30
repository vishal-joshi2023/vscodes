#include <iostream> 
using namespace std; 
int main() 
{ 
 int *Arr[1000],i=0,sizeofArr=0; 
 while(1){ 
 	Arr[i] = new int; 
 	cin >> *Arr[i]; 
 	if(cin.get() == '\n'){   //exit loop if ENTER is pressed 
 		break; 
 	} 
 	i++; 
 	sizeofArr++; 
 } 
 for (int j=0;j<=sizeofArr;j++){ 
 	cout << *Arr[j] <<" "; 
 } 
 return 0; 
} 