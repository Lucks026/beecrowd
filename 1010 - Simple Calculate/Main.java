import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        int c1 = sc.nextInt(), q1 = sc.nextInt();
        double p1 = sc.nextDouble();
        int c2 = sc.nextInt(), q2 = sc.nextInt();
        double p2 = sc.nextDouble();
        System.out.printf("VALOR A PAGAR: R$ %.2f%n", q1 * p1 + q2 * p2);
    }
}
