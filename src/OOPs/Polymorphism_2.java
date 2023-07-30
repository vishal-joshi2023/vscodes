package OOPs;

public class Polymorphism_2 {
    public static  void main(String[] Args){

        A a = new A();
        a.methodX();
        a.methodY(2);

        B b = new B();
        b.methodX();
        b.methodY(1);
        b.methodY();

        // Covariant return types
        Child c = new Child();
        System.out.println(c.getData());

        // Access Modi
        cat ct = new cat();
        ct.mewo();

        // calling base fun
        drived d = new drived();
        d.show();


    }
}

// Overriding -> same Type same args same name with Inheritance
// final/static/private methods can not override
// private method compile time error ni dega baki compile time error denge

// Jo class ka obj hoga use class ka fun call hoga by default
// nhi to parent ka
// OOPs.Parent ka bhi kr skte hai buy child obj using super

class A{
    public void methodX(){
        System.out.println("OOPs.A method");
    }
    // simple method
    public void methodY(int a){
        System.out.println("not overriding OOPs.A");
    }
}
class B extends A{

    @Override
    public void methodX(){
        System.out.println("OOPs.B method");
    }

    // simple method
    public void methodY(){
        System.out.println("not overriding OOPs.B");
    }
}

// Different return types -> vohi obj return krna child ka
// parent clas me jo return type hai vo child class me alg hoskta hai pr
// parent class ke related hi hona chahiye
// return Types
// object(P) -> (child) string/strbuffer/strbuilder , Num , char ,bool, void ,..
// Number(P) -> (child) byte/short/int/long/f/D
class Parent {
    public Object getData() {
        return new Object();
    }
}
class Child extends Parent {
    @Override
    public String getData() {
        return "Hello";
    }
}

// Access modifiers - child class me overriden fun accessModi >= hoana chahiye
// Public>default/protected>private
class Lion{
    //default
    void mewo(){ System.out.println("OOPs.Lion");}
}
class cat extends  Lion{
    // ok
     public void mewo(){System.out.println("OOPs.cat");}
    // protected void mewo(){ System.out.println("OOPs.cat");}

    // not ok
    //private void mewo(){System.out.println("OOPs.cat");}
}

// if Parent class overriden fun does not throw exception
// then child overriding method can only throw unchecked exception only (vo jo bypass ho jae)
// if OOPs.Parent fun does throw exception then child may throw same or child exception of parent exception
abstract class xyz {
    // body ni hoti like pure virtual fun must implement
    // abstract class me non abstract ho skte hai pr object ni hota isska
    abstract void fun();
    void fun2() throws RuntimeException{}
}
class x extends xyz{
    public  void fun(){}
    // child of run exception arithmetic
    public void fun2() throws ArithmeticException{}
    //public void fun2(){} ok
}

// Interface me agr method ka by default access modifier Public hai implicit (auto.) or abstract method hote hai by default
// overriding me public krna pdega explicitly
interface i1{
   void i_fun();
}
class c implements i1{
    @Override
    public void i_fun() {
        System.out.println("implement interface default fun with public");
    }
}

// super - calling base method from child
class BASE{
    void show(){
        System.out.println("Base fun");
    }
}
class drived extends BASE{
    public void show(){
        System.out.println("drived fun");
        super.show();
    }
}
