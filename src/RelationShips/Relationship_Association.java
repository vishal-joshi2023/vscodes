package RelationShips;

public class Relationship_Association {
    public static  void main(String[] Args){

    // 1 . OOPs.Inheritance IS-A  - Tightly extends/implements
    // 2 . Association HAS-A - Loosely creating obj in other class
    //        -> No OwnerShip many bank banks->people  many people-> bank

    //    -> Aggregation   - week   -> car HAS_A musicSystem(not imp) provides flexibility and reusability
    //      -> Composition - Strong -> car HAS_A RelationShips.Engine

        Engine engine = new Engine("V6");
        Car car = new Car("Toyota", engine);
        car.start();

        //car obj (associate withs) its engine obj
        //engine obj not depends on car obj
    }
}

// Association represents a semantic relationship between classes.
// It can be a one-to-one, one-to-many, or many-to-many relationship.
// The relationship between the classes can be uni-directional or bi_directional.
// The classes involved in an association can have their own independent lifecycles.
// Association can be navigable, meaning objects of one class can access
// objects of the other class through the association.

// For example, let's consider a classic association between the "Customer" class and the "Order" class
// in an e-commerce system. The "Customer" class represents individual customers,
// while the "Order" class represents specific orders placed by customers.
// Each customer can have multiple orders associated with them,
// and these orders can exist independently of the customer.
// The lifecycle of a customer object may include actions such as
// registration, updating personal details, or cancellation. Similarly,
// the lifecycle of an order object may involve creation, modification, and eventual fulfillment or cancellation.
class Engine { // independent class
    private String type;

    public Engine(String type) {
        this.type = type;
    }
    public void start() {
        // RelationShips.Engine startup logic...
    }
}
class Car {
    private String brand;

    // Association
    private Engine engine;

    public Car(String brand, Engine engine) {
        this.brand = brand;
        this.engine = engine; // engine ref_var <- engine obj
    }

    public void start() {
        engine.start();
    }
    // Other methods...
}












