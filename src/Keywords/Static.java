package Keywords;
// Keywords.Static -> Class variable , Method , block , inner/nested class
// Not used -> local Variable (fun k under koi var ko static nhi kr skte error hai), outer class
// static var -> class/method area me space lete hai
// other class ka static class name se call hoga
// super/this not allowed in static
// static block -> runs before main auto.
//    1.6 or before no need for main but after main needed but block exe first or static var fun seq wise
//    1.6++ me top to bottom check krke main hai to seq wise exe krega at last main exe.
//    Static blocks contains Native methods-> jo other lang me code hota hai
//    used to Initialize static members


public class Static {

    int a = 100; // instance variable
    static int b=100; // Class variable belongs to class hr obj k liye commom save space

    public static  void main(String[] Args){
     // static int c=100;  not allowed local var as static
        int c=100;

        System.out.println(Static.b);

        // static direct only call other static
        // invalid
        // display_1();
        // a=200;

        //valid
        display_2();
        b=100;

        Static st  = new Static();
        st.display_1();
        st.a=200;

        //static overriding

        SuperClass superClass = new SubClass();
        SuperClass.fun();

        SubClass subClass = new SubClass();
        subClass.fun();


    }

    void display_1(){
        System.out.println("Non static fun");
    }

    static void display_2(){
        System.out.println("static fun");
    }

    //block
    static {
        System.out.println("Static Block Executed before main");
    }
}

class SuperClass{
  public  static void fun(){
        System.out.println("\nSuperClass Static Method");
    }
}
class SubClass extends  SuperClass{
    // @Override
//     public static void fun() {
//        System.out.println("subClass Static Method");
//    }
}

