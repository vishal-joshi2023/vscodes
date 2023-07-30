package Thread_Demo;

public class ThreadSleep {
    public static void main(String[] args) {

        for(int i=1;i<=10;i++){
            try {
                Thread.sleep(2000); //sleep is static so Thread.sleep
                System.out.println(i);
            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
        }
    }
}
    