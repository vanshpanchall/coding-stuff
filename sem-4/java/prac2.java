import java.util.Scanner;
public class prac2 {
    public static void main(String[] args) {
        float rupees;
        try (Scanner in = new Scanner(System.in)) {
            System.out.println("Please enter rupees:");
            rupees = in.nextLong();
        }
        float dollars = rupees / 70;
        System.out.println(dollars + " Dollars");

    }
}
