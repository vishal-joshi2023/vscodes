


using System;

// namespace -> classes -> members -> methods/data ->statemnts

namespace CSHARP // is used to organize your code, and it is a container for classes and other namespaces.
{
//Console.WriteLine("hi"); ->not working at here working inside class/approprite place
 public class Program{
	
	//static -> not need for manual invocatin invoked auto. when code is run not obj is needed 
	public static void Main(){
		
		//with using sys
		Console.WriteLine("Hello World\n");
		Console.Write("I will print on the same line.");
		
		//without using system
		System.Console.WriteLine("\nhi");  
		
		Program p1 = new Program();
		p1.fun();
	}
	 
	void fun(){
	   Console.WriteLine("running non static member Fun so need obj to invoke inside main ");	
	 }
 }
}
/*
It is also possible to convert data types explicitly by using built-in methods, such as
Convert.ToBoolean, 
Convert.ToDouble, Convert.ToString,
Convert.ToInt32 (int) and Convert.ToInt64 (long):
int myInt = 10;
double myDouble = 5.25;
bool myBool = true;
int myInt1 = (int) myDouble;    // Manual casting: double to int
Console.WriteLine(Convert.ToString(myInt));    // convert int to string
Console.WriteLine(Convert.ToDouble(myInt));    // convert int to double
Console.WriteLine(Convert.ToInt32(myDouble));  // convert double to int
Console.WriteLine(Convert.ToString(myBool));   
*/


