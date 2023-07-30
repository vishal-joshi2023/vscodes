package Thread_Demo.Synchornization;

// data inconsistency + dead lock etc
class BookSeatsApp extends  Thread{
    static BookingSeats b;
    int seats;
    @Override
    public void run(){
        b.book(seats);
    }
    public static void main(String[] args){
        b   = new BookingSeats();
        BookSeatsApp person1 = new BookSeatsApp();
        person1.seats=10;
        BookSeatsApp person2 = new BookSeatsApp();
        person2.seats=10;

        person1.setName("Person1");
        person2.setName("Person2");
        person1.start();
        person2.start();
//        person1.run();
//        person2.run();
    }
}
class BookingSeats{
    static int totalSeats = 10;
    void book(int seats){
        if(seats<=totalSeats){
            System.out.println("BOOKED BY "+ Thread.currentThread().getName());
            totalSeats -= seats;
            System.out.println("Remaining "+totalSeats);
        }
        else {
            System.out.println("Available "+totalSeats);
        }
    }
}


public class notSyncProject {

}