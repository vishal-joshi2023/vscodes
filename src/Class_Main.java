import java.lang.reflect.Constructor;

public class Class_Main {
    public static  void main(String[] Args){

        //  Creating object all methods
        // 1 new
        //declaration + instantiation(new) + initialization(ctor())
        Test_1 t1 = new Test_1(1);
        System.out.println(t1.id);

        // 2 class.newInstance() method Exception
        // It throws IllegalAccessException if the class or its nullary constructor is not accessible.
        // It also throws InstantiationException, if the Class represents an abstract class, an interface,
        // an array class, or a primitive type.
//        try {
//            Test_1 t2 = Test_1.class.newInstance();
//            System.out.println(t2.id);
//        }
//        catch (Exception e){
//            e.printStackTrace();
//        }


        // 3 newInstance() method of Constructor class
//        try
//        {
//            Constructor<Test_1> t3 =Test_1.class.getConstructor();
//            Test_1 t3a = t3.newInstance();
//            System.out.println(t3a.id);
//        }
//        catch(Exception e)
//        {
//            e.printStackTrace();
//        }

        // 4 Java Object.clone() method
        // 5 Java Object Serialization and Deserialization


        //singleton class
        //SingleToneClass obj = new SingleToneClass(); invalid

        SingleTonTest obj = SingleTonTest.getObject();
        //Now if we create other ref all points same object;

        SingleTonTest object2 = SingleTonTest.getObject();

        System.out.println(obj.equals(object2)); //true same obj points

    }
}

class SingleTonTest  {
    private static SingleTonTest instance_1;

    //private ctor so no new is not user outside
    private SingleTonTest(){}

    public static SingleTonTest getObject(){
        if(instance_1==null){
            instance_1 = new SingleTonTest(); //object created once
        }

        return instance_1; //return that obj if created already
    }
}

