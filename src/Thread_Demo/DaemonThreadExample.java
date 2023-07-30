package Thread_Demo;

// uns in the background and provides services to other Non demon threads
// or performs background tasks.
// ex-> garbage collector, finalizer ,Reference Handler etc
// auto terminates if no thread is executing
// first setDemon() -> start
// main() demon ko nhi kr skte kyu ki main start pele hota hai lol
// Thread.currThread.setDemon(true);
// lower priority always
public class DaemonThreadExample {
    public static void main(String[] args) {

        Thread daemonThread = new Thread(new DaemonTask());
        daemonThread.setDaemon(true); // Set the thread as daemon
        daemonThread.start();

        Runnable t1 = ()->{ int i=0;
                            while(i<50) {
                                i++;
                                System.out.println("Executing " + Thread.currentThread().getName());
                            }
                           };

        Runnable t2 = ()->{ int i=0;
                            while(i<50) {
                                i++;
                                System.out.println("Executing " + Thread.currentThread().getName());
                            }
                          };

        Thread thread1 = new Thread(t1);
        Thread thread2 = new Thread(t2);

        thread1.start();
        thread2.start();


        System.out.println("exiting "+Thread.currentThread().getName());
    }

    static class DaemonTask implements Runnable {
        @Override
        public void run() {
            try {
                System.out.println("Daemon thread is running.");
                Thread.sleep(500000); // Simulate some background task
            } catch (InterruptedException e) {
                e.printStackTrace();
            } finally {
                System.out.println("Daemon thread is exiting.");
            }
        }
    }
}
