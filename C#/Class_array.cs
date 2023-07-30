using System;
namespace CSHARP {
   public class Class_array {

    public void fun_arr(){
        
        // Create an array of four elements and add values right away 
        //string[] cars = new string[4] {"Volvo", "BMW", "Ford", "Mazda"};

        // Create an array of four elements without specifying the size 
        //string[] cars = new string[] {"Volvo", "BMW", "Ford", "Mazda"};


        // Console.Write("Enter size : ");
        // int size =  Convert.ToInt32(Console.In.ReadLine());
        // int[] arr = new int[size];

        // //ip  
        // for(int i=0;i<5;i++){
        //     Console.Write("Enter NUM : ");
        //     arr[i] = Convert.ToInt32(Console.In.ReadLine());
        
        // } 

        // foreach (var item in arr)
        // {
        //     Console.Write($"{item} , "); 
        // }

        //array method
        // int[] marks = {20,10,30,40,50};
        // int[] grads = {10,20,30,40,50};

        // Console.WriteLine(Array.IndexOf(marks,10));
        // Console.WriteLine(Array.IndexOf(marks,50));
        // //return -1 not found
        // Console.WriteLine(Array.IndexOf(marks,300));
        // Console.WriteLine(Array.IndexOf(marks,0));
        
        // Array.Sort(marks);

        // Array.Reverse(marks);

        // Array.Reverse(grads); 
        // //cmp
        // if(Enumerable.SequenceEqual(marks,grads)) Console.WriteLine("True");
        
        //multi d array
        // int[,] numbers = { {1, 4, 2}, {3, 6, 8} };
        // int[,] nums = new int[2,3];

        // foreach (int i in numbers){
        //   Console.Write(i);
        // } 

        // //manaual using GetLength(0)->rows [rows,cols,...] 
        // for (int i = 0; i < numbers.GetLength(0); i++) { 
        //   for (int j = 0; j < numbers.GetLength(1); j++) { 
        //     Console.Write(numbers[i, j]); 
        //   } 
        // }  
         

        //Jagged array -> cols can be in diffrents sizes
       
        //row is mandatory
        //data_type[][] name_of_array = new data_type[rows][]

      //   int[][] arr = new int[3][];
      //   //initilize sub arrys
      //   arr[0] = new int[2];
      //   arr[1] = new int[] {1, 2, 3, 4};
      //   arr[2] = new int[5]; //till < 3 rows 
        
       //direct
       int[][] jagged_arr = new int[][] {
               new int[] {1, 2, 3, 4},
               new int[] {11, 34, 67},
               new int[] {89, 23},
               new int[] {0, 45, 78, 53, 99}
              };

      //  int[][] jagged_arr2 = {
      //          new int[] {1, 2, 3, 4},
      //          new int[] {11, 34, 67},
      //          new int[] {89, 23},
      //          new int[] {0, 45, 78, 53, 99}
      //      }; 

       //for access    
      
     for(int i=0;i<4;i++){
        for(int j=0;j<jagged_arr[i].Length;j++){
          Console.Write("{0} ",jagged_arr[i][j]);}
        Console.WriteLine("");
     }


    }
  }
}