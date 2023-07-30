package Thread_Demo;

class A extends  Thread{
    @Override
    public void run(){
        int i=0;
        while(i<50){
            i++;
            System.out.println("Thread...1");
        }
    }
}
class B extends  Thread{
    @Override
    public void run(){
        int i=0;
        while(i<50){
            i++;
            System.out.println("Thread...2");
        }
    }
}

public class ThreadClass {

    public  static void main(String[] args){
        // main thread 1 by jvm
        System.out.println("main() thread - "+Thread.currentThread().getName());

        A a = new  A();
        B b = new  B();

        a.start(); // thread 2
        b.start(); //thread     3
    }
}
