package Keywords;

public class Super {
        public static  void main(String[] Args){
                Branch b = new Branch(1);
                b.ShowName("vishla");
        }
}
// Inheritance imp. to use super
// Keywords Super -> parent ref variable
// ref to parent class object/instance
// also used to pass/call parent class constructor by default bace ctor invoked auto check using print()
// class live krne ka checking process
// First arg is always super or this both not allowed only one
// also call parent funs()


class Company {
        String name = "xyz.Organization";

        Company() {
                System.out.println("Keywords.Company Constructor");
        }

        Company(int val) {
                this();
                System.out.println("Keywords.Company Para. Constructor");
        }
        void methodX(){
                System.out.println("inside Keywords.Company method");
        }
}

class Branch extends Company{
        String name = "Abc Keywords.Branch";
        void ShowName(String name){
                System.out.println("name is : "+name );

                System.out.println(this.name);
                //Access parent fields
                System.out.println(super.name);
        }
        Branch(int val){
                //1st statement super
                super(val);
                System.out.println("Keywords.Branch Constructor");

                this.methodX();
        }
        void methodX(){
                super.methodX();
                System.out.println("inside Keywords.Branch method");

        }
}
