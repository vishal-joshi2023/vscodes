package Thread_Demo;

class C implements Runnable {
    @Override
    public void run(){
        int i=0;
        while(i<50){
            i++;
            System.out.println("Executing  "+Thread.currentThread().getName());
        }
    }
}
class D implements Runnable {
    @Override
    public void run(){
        int i=0;
        while(i<50){
            i++;
            System.out.println("Executing  "+Thread.currentThread().getName());
        }
    }
}

public interface RunnableInterface {
    public  static void main(String[] args){

        C c = new  C();
        // also good for understanding
        Runnable d = new  D();

        // Runnable contains only Run thread class imp runnable

//        c.start();
//        d.start();

       Thread tc = new Thread(c,"Thread of C"); //explicit name of thread
       Thread td = new Thread(d,"Thread of D");

       // 1(MIN) 5(NORM) 10(MAX) only
       tc.setPriority(Thread.MIN_PRIORITY);// 1
       td.setPriority(Thread.MAX_PRIORITY); // 10

       tc.start();
       td.start();
    }
}
