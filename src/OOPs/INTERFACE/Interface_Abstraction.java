package OOPs.INTERFACE;

// Abstraction achieved By using Abstract Classes(0-100%) ,  Interfaces(100%)
// Interface
// abstraction + multiple Inheritance + loosely coupling
// Interface me agr method ka by default access modifier Public hai implicit (auto.) or abstract method hote hai by default
// overriding me public access modi krna pdega explicitly must
// public abstract ...... bu default
// Field -> public static final by default
// Ctor -> not allowed in abstract allowed
// we can implement interface in abstract class or leave it bcz abstract is abstract

// V8 or above interface supports Concrete methods -> can be override
//    -> Default access modi must(Explicitly) nhi to complie error
// Static methods supported -> public only (by default) ->not override
// private methods allowed  ->not override
// class implements i1,i2...{}

public class Interface_Abstraction {

    public static  void main(String[] Args) {
        //Interface
        chile c = new chile();
        c.speed(1000);
        c.capacity();

        //Interface ref
        I_one i = new chile();
        i.capacity();
        i.speed(1011);

        I_one.showCount();


        MyClass myObj = new MyClass();
        myObj.someMethod();
        myObj.anotherMethod();
    }
}
interface I_one{
    //public static final by default
    int count=0;

    // public abstract by default --> must override
    void speed(int i);

    //Not nessary to override
    //use default explicitly concrete method
    default void capacity(){
        System.out.println("Interface Cap : 2");
    }

    //No override support for both
    //public
    static void showCount(){
        System.out.println(count);
    }

    //private method
    private void Key(){
        System.out.println("unlocked");
    }

}
class chile implements I_one{
    // public must
    @Override
    public void speed(int s) {
        System.out.println("speed : "+s);
    }
}

interface MyInterface {
    void someMethod();
    void someMethod2();
}

abstract class MyAbstractClass implements MyInterface {
    @Override
    public void someMethod() {
        // Implementation of the method in the abstract class
        System.out.println("Abstract class implementation of someMethod");
    }

    // Not necessary to re declare auto compiler knows its abstract class
//    public abstract void someMethod2();
    public abstract void anotherMethod();
}

class MyClass extends MyAbstractClass {
    @Override
    public void someMethod() {
        System.out.println("Concrete class implementation of someMethod");
    }
    @Override
    public void anotherMethod() {
        System.out.println("Concrete class implementation of anotherMethod");
    }

    @Override
    public void someMethod2() {
        System.out.println("Concrete class implementation of someMethod2");
    }



}