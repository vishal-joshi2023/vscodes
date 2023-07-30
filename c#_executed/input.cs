using System;

public class Program
{
	public static void Main(String[] args)
	{
	  int firstNumber = 5, secondNumber = 10, result;
	  result = firstNumber + secondNumber;

    Console.WriteLine("{0} + {1} = {2}", firstNumber, secondNumber, result); 

    string testString;
		Console.Write("Enter a string - ");
		testString = Console.ReadLine();
		Console.WriteLine("You entered '{0}'", testString);
			
		//var s =  Console.ReadLine(); //RETURN STRING
	  string str =  Console.ReadLine();
    
    //underline goes bcz var is like auto so is accepts null
    var str2 =  Console.ReadLine();

    //allowed	
    //WriteLine(string format, object? arg0, object? arg1);			

	Console.WriteLine(str2+" "+str)	; 

    Console.WriteLine("{0} {1}",str2,str)	;
   
    //for ints etc
    Console.WriteLine($"{str2} {str}")	; 

    //Cannot implicitly convert type 'string' to 'int'
	 int age = Convert.ToInt32(Console.ReadLine());
    int p = 100;

    Console.WriteLine("{0} {1}",age,p); 

    Console.WriteLine($"{age} {p}"); 
		
	}
}
