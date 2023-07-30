package RelationShips;

import java.util.ArrayList;
import java.util.List;
public class Relationship_Aggregation {
    public static  void main(String[] Args){

        University university = new University("ABC RelationShips.University");

        Department department1 = new Department("Computer Science");
        Department department2 = new Department("Mathematics");

        university.addDepartment(department1);
        university.addDepartment(department2);
    }
}
// Aggregation is represented by a member variable in the aggregating class.
// The aggregating class holds a reference to the aggregated object(s).
// The aggregated object(s) can exist independently and can be shared among multiple aggregating objects.
// Aggregation is a weaker form of association compared to composition.
// In aggregation, the aggregated objects can exist without the aggregating object.
// Aggregation is denoted by a diamond-shaped arrow with a hollow diamond end in UML class diagrams.

// In this case, the "RelationShips.Department" objects are aggregated by the "RelationShips.University" object.
// However, each "RelationShips.Department" object can exist independently, meaning it can be created,
// modified, or accessed separately from the "RelationShips.University" object.
// Additionally, multiple "RelationShips.University" objects can also aggregate the same "RelationShips.Department" objects,
// allowing for sharing of the aggregated objects among different aggregating objects.
class Department {
    private String name;
    public Department(String name) {
        this.name = name;
    }
}
class University { //aggregating class
    private String name;
    // Aggregation
    private List<Department> departments;

    public University(String name) {
        this.name = name;
        departments = new ArrayList<>();
    }
    public void addDepartment(Department department) {
        departments.add(department);
    }
}
///
class Address {
    private String street;
    private String city;
    private String state;

    public Address(String street, String city, String state) {
        this.street = street;
        this.city = city;
        this.state = state;
    }
}
// student HAS_A RelationShips.Address week bounding
// or id,name.
// Child class
class Student{
    int id;
    private String name;

    // Aggregation
    private Address address;

    public Student(){ };

    public Student(String name, Address address) {
        this.name = name;
        this.address = address;
    }
}
// RelationShips.Player HAS_A RelationShips.Student (using new / ref variable)
// Jo juri prop hai unko use kro without extends loosely bond
class Player{
    Student s1 = new Student();
}

