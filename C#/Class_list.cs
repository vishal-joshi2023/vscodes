using System;
using System.Collections.Generic;

namespace CSHARP {
 public class Class_list{
    //In C#, collection represents group of objects. 

    // System.Collections.Generic classes -> list dict etc
    // stem.Collections classes (Now deprecated) -> arrayList q stack hashtable 
    // stem.Collections.Concurrent classes -> adv.

    //list -> generic class list
     public void fun_list(){
        
        // 1
        List<int> list1 = new List<int>();
        //2
        var list =  new List<int>()  {0,2,5,4,3,1,6,1,8,7,9};
        //3
        var names = new List<string>() {"Sonoo", "Vimal", "Ratan", "Love" };  
        
        foreach(var i in list)
          Console.Write($"{i} ");
          Console.WriteLine("\n");

        list.Add(1);
         
        foreach(var i in list)
          Console.Write($"{i} ");
          Console.WriteLine("\n");

        Console.WriteLine($"No of ele in list : {list.Count}");

        //cap give curr maxi holding size in memory it can be vary  
        Console.WriteLine($"Capacity of the list : {list.Capacity}");

        Console.WriteLine($"4 hai ya nhi : {list.Contains(4)}");  
        
        Console.WriteLine($"1 ki index :  { list.IndexOf(1) }"); 
        
        list.Insert(0,100);// ind 0 pe 100 daal ke auto shift others

        Console.WriteLine($"1 ki last  index :  { list.LastIndexOf(1) }"); 

        foreach(var i in list)
          Console.Write($"{i} ");
          Console.WriteLine("\n");

         list.Remove(1);

        foreach(var i in list)
          Console.Write($"{i} ");
          Console.WriteLine("\n");

        list.Sort();

        foreach(var i in list)
          Console.Write($"{i} ");
          Console.WriteLine("\n");

        list.Reverse();

        foreach(var i in list)
          Console.Write($"{i} ");
          Console.WriteLine("\n");
       
       list1 = list;

       // if(list1.Equals(list2)) -> checks l1 l2 are same instance of a list

       if(list==list1) 
        Console.WriteLine("True");

       //best way -> Linq class
       if(list1.SequenceEqual(list))   
        Console.WriteLine("True");

       foreach(int i in list.ToArray()){ //convert to arry
         Console.WriteLine(i);
       } 
    
       var arr2d = new List<List<int>> () {
        new List<int>{0,2,5,4},
        new List<int>{3,1,6,1},
        new List<int> {5,8,7,9}};
        
        //jagged array and list support foreach not 2d arry
        foreach(var v in arr2d.ToArray()){ 
            foreach(int i in v.ToArray()){
                Console.Write($"{i} ");
            }
            Console.WriteLine("\n");
        }
          
         //convert to arry -> 2dlist or 2darry support l[0]/a[0]
         var Myarr = list1.ToArray();
        //convert to list   
         var Mylist = Myarr.ToList();

   }











  }
}