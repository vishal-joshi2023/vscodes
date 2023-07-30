package inputFromUser;
import java.util.Scanner;

public class Input {
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);

        String name = scn.next();
        char ch = scn.next().charAt(0);
        int num = scn.nextInt();
        long ll = scn.nextLong();

        System.out.println(name+" "+ch+" "+num+" "+ll);
    }
}
