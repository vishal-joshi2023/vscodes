package Thread_Demo.Synchornization;

class Total extends  Thread{

    int total = 0;
    @Override
    synchronized public void run(){
        for(int i=0;i<10;i++){
            total += 1000;
        }
        // release lock for main
        this.notify();
    }
}
public class Intrrupts {
    public static void main(String[] args) throws InterruptedException {

        Total thread = new Total();

        // Main release the lock so thread.start exe and finish and print 10000
        thread.start();

        //to pause main
        synchronized (thread){
            thread.wait(); // hold
            System.out.println(thread.total);
        }

    }
}

