import Protected_example_check.classX;

class checkProtectedOutsidePackage extends classX {

    public static void main(String[] args){

        checkProtectedOutsidePackage a = new checkProtectedOutsidePackage();
        a.exe();

        classX b = new classX();
       // b.exe(); error only sub class can consume outside package but in side
        // it seft can consume
   }
}
