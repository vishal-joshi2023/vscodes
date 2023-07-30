package RelationShips;

public class Relationship_composition {
    public static  void main(String[] Args){}
    // Composition
    CarX carx = new CarX("Toyota", "V6");


}

// Composition is represented by a member variable in the containing class.
// The composed class is created and initialized within the constructor of
// the containing class.
// The composed objects cannot exist independently of the container object.
// The container object is responsible for the creation, destruction,
// and management of the composed objects.
// Composition implies a strong ownership relationship,where the
// lifetime of the composed objects is tied to the lifetime of the container object.

class EngineX { //not independent class
    private String type;

    public EngineX(String type) {
        this.type = type;
    }

    // Other methods...
}

class CarX {
    private String brand;
    private EngineX enginex; // Composition

    public CarX(String brand, String engineType) {
        this.brand = brand;
        this.enginex = new EngineX(engineType); // Creating the RelationShips.Engine object within the RelationShips.Car constructor
    }

    // Other methods...
}
