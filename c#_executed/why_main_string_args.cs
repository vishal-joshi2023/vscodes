using System;
namespace c3{

    class why_main_string_args
    {
        static void Main(String[] args){

            //must need ip string while run
            // dotnet run vishal joshi
            Console.WriteLine(args[0] + args[1]);
            
            //run method without obj ->static
            Fstring_fun();
 
            why_main_string_args obj = new why_main_string_args();
            obj.Var_init_rules();

            obj.fun_math();
            obj.string_arr();
        }
        
        //fun -> indipendent 
        //method -> attached to class
        // char -> in c# 16bit ie. 2 pow 16
         
        //abc.properity -> gives us a value
        //abc.method() -> can do something

        void string_arr()
        {
            char[] str = {'a','b','c'};
            string str2 = "abc";

            string str3 = new string(str);
           
            // string Interpollation
            string si = $"hello {str2} ";

            Console.WriteLine(str3+" "+si);
            
            //methos & properities
            
            //lenght -> pro
            Console.WriteLine(str3.Length);
           
            //str cmp() -> return int 
            // 0->eql
            Console.WriteLine(str2.CompareTo(str3));
            //cmp->1 if first let is less than cmpartor b > a
            string x = "bbc";
            Console.WriteLine(x.CompareTo(str2));
            //cmp-> -1 if first let is grater than cmpartor a<b
            Console.WriteLine(str2.CompareTo(x));
         
            bool b = str3==str3;

            string ss = "lj ljll jll llj ljl j";
            string[] sarr = ss.Split(' ');
 
             
            //verbatim strings
            //@ -> skip escap_seq except "" use "" "" 
            string vbs = @"hello \t \n 'h' ""Hello"" ";
            Console.WriteLine(vbs);
        }

        void fun_math(){ 
              
              double x = 10.23;
              double y = 9.9;

              //round off
              Console.WriteLine("{0} : {1}",Math.Round(x),Math.Round(y));
              //up
              Console.WriteLine("{0} : {1}",Math.Round(x,0,MidpointRounding.AwayFromZero),Math.Round(y,0,MidpointRounding.AwayFromZero));
              //Floor
              Console.WriteLine("{0} : {1}",Math.Floor(x),Math.Floor(y));
              //celling
              Console.WriteLine("{0} : {1}",Math.Ceiling(x),Math.Ceiling(y));

              //truncate -> chop every thing after .
              Console.WriteLine("{0} : {1}",Math.Truncate(x),Math.Truncate(y));
              
              Console.WriteLine("{0}", Math.Min(x,y));

        }


        void Var_init_rules(){
            //gives compile error
            // int x;
            // Console.WriteLine(x);
            
            int a = int.MinValue;
            Console.WriteLine(a);

            int b = int.MaxValue;
            Console.WriteLine(b);

            long l = long.MaxValue;
            Console.WriteLine(l);

            //use nullables
            int? x = null;
             
            //decimal(m) > double > float(f) (better is best)
            Console.WriteLine(x);
            return ;
        }

        static void Fstring_fun(){
            
            var anInt = 1;
            var aBool = true;
            var aString = "3";

            //using fstringFun
            var formated = string.Format("{0},{1},{2}", anInt, aBool, aString);
            //$
            var formated2 = $"{anInt},{aBool},{aString}";

            Console.WriteLine(formated+" "+formated2);
            return ;
        }

    }
    
}
     
