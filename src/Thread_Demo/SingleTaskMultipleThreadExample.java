package Thread_Demo;

public class SingleTaskMultipleThreadExample {

    public static void main(String[] args) {
        int numThreads = 5; // Number of threads to create

        // Create a task to be executed
        Runnable task = new MyTask();

 //  if do this then no need for class MyTask
 //  in other words, the lambda expression is an alternative way of implementing the
 //  functional interface without explicitly creating a separate class that implements it.
//        Runnable task = () -> {
//            System.out.println("Task is being executed by Thread: " + Thread.currentThread().getName());
//        };

        // Create and start the Multiple threads
        for (int i = 0; i < numThreads; i++) {
            Thread thread = new Thread(task);//implicit name of thread 0.....n-1
            thread.start();
        }
    }

    static class MyTask implements Runnable {
        @Override
        public void run() {
            System.out.println("Task is being executed by Thread: " + Thread.currentThread().getName());
            // Perform the task logic here
        }
    }
}






