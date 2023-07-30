package Keywords;

public class Final {

    public static  void main(String[] Args) {

//        int i=1;
//        int j=1;
//        //phle increment
//        System.out.println((++i)+1);
//        //phle kam lo inc hogi bad background me return hogi original val pele
//        System.out.println((j++)+1);
//
//        System.out.println(i+" "+j);

        final float pi = 3.14F; //cant be change now

    }

    final int val;
    public Final() {
        val =  100; // or we can se to any pass value by calls
    }

}

// Use of final with
// Variable -> when value set for no change
// Method   -> we can not override final method (Compile time error)
// Class    -> We can not extend final classes



