import java.util.Scanner;
public class prac3 {
    public static void main(String[] args) {
        try (Scanner scan = new Scanner(System.in)) {
            System.out.println("Enter marks of 6 subjects: ");
            int totalMarks = 0;
            for (int i = 1; i <= 6; i++) {
                System.out.print("Subject " + i + ": ");
                int marks = scan.nextInt();
                totalMarks += marks;
            }

            double percentage = (double) totalMarks / 6.0;
            System.out.println("Percentage marks: " + percentage + "%");
        }

    }
}
