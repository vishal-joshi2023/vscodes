package OOPs;

public class Encapsulation {
    public static  void main(String[] Args){
        Person p = new Person();
        p.setName("vi");
        System.out.println(p.getName());
    }
}
// Abstraction is Details hiding -> Implementation hiding
// Encapsulation is Data hiding -> (data + methods(act upon data))

// Achieved using access modifies(private) on data + getters/setters on data + packages
// Access modi -> public/private/protected/default
// Non Access modi -> static/final/abstract/sync/volatile/strictfp(to cal strict fp method or class ke aage access modi k bad)
class Person {
    private String name;

    public String getName() {
        return name;
    }

    public void setName(String newName) {
        name = newName;
    }
}
