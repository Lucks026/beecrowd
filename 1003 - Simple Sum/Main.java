import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        double a = sc.nextDouble();
        double b = sc.nextDouble();
        System.out.printf("SOMA = %.1f%n", a + b);
    }
}
