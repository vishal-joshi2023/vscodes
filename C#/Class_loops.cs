using System;
namespace CSHARP {
   public class Class_loops{

      public void Lfun(){  
         Console.WriteLine("Same as do while and for !!");
         
         int[] numbers = { 125, 132, 95, 116, 110 };
         
         //or for size()
         int[] arr = new int[10]; 
         
         //For Each loop -> foreach( (type) ref in (itrable) )
         foreach (int num in numbers)
           Console.WriteLine(num);

         //in for each value cant be modified of array
         //foreach(int num in marks) { num = num * 2; // num change not marks  }
      
      } 
  }
}