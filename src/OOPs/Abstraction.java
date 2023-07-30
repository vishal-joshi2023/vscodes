package OOPs;
// Abstraction is Details hiding -> Implementation hiding
// Encapsulation is Data hiding -> (data + methods(act upon data))

public class Abstraction {
    public static  void main(String[] Args){

        //Abstract class  -> obj X  ref yes
        bike hero = new bike(70000);
        hero.Speed(110);
        hero.StartsWith("button");
        System.out.println(hero.price);

        // Ref. var
        Vehicle v = new bike(90100);
        v.Speed(120); // recent implementation calls first then parent
        v.StartsWith("key");

    }
}

// Abstraction achieved By using Abstract Classes(0-100%) + Interfaces(100%)
abstract class Vehicle{
    protected int price;

    Vehicle(int p){ price = p; } //ctor is allowed

    void Speed(int speed){
        System.out.println("Speed of vehicle is : "+speed);
    }
    abstract void StartsWith(String s);
}
class bike extends Vehicle{

    bike(int p) {super(p); }   //use super to call ctors

    @Override
    public void Speed(int s){
        System.out.println("Speed of OOPs.bike is : "+s);
        super.Speed(s);
    }

    @Override
    public void StartsWith(String s){
        System.out.println("Bike Starts with :" + s);
    }
}




