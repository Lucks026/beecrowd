import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        int number = sc.nextInt();
        int hours = sc.nextInt();
        double rate = sc.nextDouble();
        System.out.println("NUMBER = " + number);
        System.out.printf("SALARY = U$ %.2f%n", hours * rate);
    }
}
