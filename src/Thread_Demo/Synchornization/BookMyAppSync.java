package Thread_Demo.Synchornization;

public class BookMyAppSync extends Thread {
    static BookingSeatsClass b;
    int seats;

    @Override
    public void run() {
        b.book(seats);
    }

    public static void main(String[] args) {
        b = new BookingSeatsClass();

        for(int i=1;i<=5;i++){
            BookMyAppSync obj = new BookMyAppSync();
            obj.seats = i;
            obj.setName("Person"+i);
            obj.start();
        }

    }
}
class BookingSeatsClass{
    static int totalSeats = 10;

    // use synchronized keyword for method sync
    // synchronized void book(int seats)

    void book(int seats){

        System.out.println("normal Async task executing by " + Thread.currentThread().getName());

        //sync block only important code in sync other one exe by threads
        synchronized (this) {
            if (seats <= totalSeats) {
                System.out.println("BOOKED BY " + Thread.currentThread().getName());
                totalSeats -= seats;
                System.out.println("Remaining " + totalSeats);
            } else {
                System.out.println("Sorry " + Thread.currentThread().getName() + " Available " + totalSeats);
            }
        }
    }
}
