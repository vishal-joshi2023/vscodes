package OOPs;

public class Polymorphism_1 {
    public static  void main(String[] Args){

        // Compile time -> overloading (Compiler)
        // Run Time     -> Overriding

        Example e1 = new Example();
//        System.out.println(e1.add(2,4));
//        System.out.println(e1.add(2.0,3.0));
//        System.out.println(e1.add(2,4,6));
//        System.out.println(e1.add("Vishal","Joshi"));

//        Overloaded run hoga
        Alpha.main();


    }
}

// Overloading
// Method overloading cannot be done by changing the return type of methods.
// The most important rule of method overloading is that two overloaded methods must have different parameters.

class Example {
    public int add(int a, int b) {
        return a + b;
    }

//    Not Allowed
//    public double add(int a, int b) {
//        return a + b;
//    }

    public int add(double a, int b) {
         return (int)a + b;
    }
    public double add(double a, double b) {
        return a + b;
    }

    public String add(String a,String b){
        return a+" "+b;
    }

    public int add(int a,int b,int c){
        return a+b+c;
    }
}

// Main() can also be Overloaded
// original to execute hoga hi hoga
class Alpha{

  public  static  void main(String[] args){
      System.out.println("Original Main with args");

      // To exe. overloaded main
      Alpha alpha = new Alpha();
      alpha.main();
  }
  public  static  void main(){
      System.out.println("Overloaded Main with No parameters");
  }


}

// Auto Type Promotion
class Beta{

    public static  void main(String[] Args){
        Beta beta = new Beta();
        beta.disp(1);
        beta.disp("str");

        // Auto type promotion if not found
        // char->int

        //normal yar  lol
        // byte->sort->int
        // int->float/long/double
        // long->F/D
        // (int...double) -> (Object obj) parent class if(not found approprite ones)
        beta.disp('a');
        beta.disp(1.01);

        //String me
        beta.print("Hello");
        //StringBuffer me
        beta.print(new StringBuffer("Hello"));

        //Error -> confuse kisme jau
        //beta.print(null);

        //multi promotion not possible
//        beta.fun(1,1);
//        beta.fun(1.1,1);
//        beta.fun(1,1.1);

        // Var args
        beta.disp(1); //normal single vala
        beta.disp(1,1); // varargs
    }

    public void disp(int a){
        System.out.println("int Display");
    }

    public void disp(String s){
        System.out.println("String Display");
    }

    public void disp(Object obj){
        System.out.println("Object Class Display");
    }

    //string ke case me agr String or StringBuffer input args ho
    public void print(String s){
        System.out.println("String Print");
    }
    public void print(StringBuffer s){
        System.out.println("StringBuffer Print");
    }

    public void fun(int a, float b){
        System.out.println("int float");
    }
    public void fun(float b ,int a ){
        System.out.println("float int ");
    }

    // Var args
    public void disp(int... a){
        System.out.println("Var args Display");
    }
}

