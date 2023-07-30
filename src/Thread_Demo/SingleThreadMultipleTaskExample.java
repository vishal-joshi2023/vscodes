package Thread_Demo;

public class SingleThreadMultipleTaskExample {

    public static void main(String[] args) {

        // Create tasks to be executed
        // normal
        Runnable task1 = new Task1();

        //  in other words, the lambda expression is an alternative way of implementing the
        //  functional interface without explicitly creating a separate class that implements it.
        Runnable task2 = () -> System.out.println("Executing task 2 "+Thread.currentThread().getName());
        Runnable task3 = () -> System.out.println("Executing task 3 "+Thread.currentThread().getName());

        // Execute tasks sequentially in a single thread
        Thread thread = new Thread(() -> {
            task1.run();
            task2.run();
            task3.run();
        });

        thread.start();
    }

    //inner class
    static class Task1 implements Runnable {
        @Override
        public void run() {
            System.out.println("Executing task 1 "+Thread.currentThread().getName());
        }
    }

}