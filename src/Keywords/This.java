package Keywords;

public class This {
    public static  void main(String[] Args){

        Employee e = new Employee();
        e.setId(101);
        e.getId();

        // 1
        ThisDemo demo = new ThisDemo();
        demo.print();

        //2
        ThisDemo demo1 = new ThisDemo(10);

        // 3 passing this to method
        demo.fun2();

        //4
        Prime2 P2 = new Prime2();
        P2.fun();

        //5 Keywords.This can be used to return current Class instance
        // className fun() {return this};
    }
}

// Keywords.This -> ref to current object
// this.var = ref to current class instances variable

class Employee{
    private int id;

    public void setId(int id){
        // id = id; local var same
        this.id = id;
    }

    public void getId(){ System.out.println(id); }
}

// other uses
class ThisDemo{

    // 1 invoke current class method
    void display(){ System.out.println("Display fun ");}
    void print(){ display(); } //this.display(); by default

    // 2 curr class ctor calling
    ThisDemo(){
        System.out.println("base ctor");
    }
    ThisDemo(int num){
        // always first argument is this();
        this() ;
        System.out.println("para ctor");
    }

    // 3 passing this to method
    void fun1(ThisDemo obj){
        System.out.print("calling using this as obj -> ");
        obj.display();

    }
    void fun2(){
        fun1(this);
    }

}

// 4 pass this to ctor as argu
class Prime{
    Prime(Prime2 obj){
        System.out.println("Keywords.Prime ctor but Keywords.Prime2 obj");
    }
}

class Prime2{
    void fun(){
        Prime p = new Prime(this);
    }

}


