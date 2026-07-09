import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        double v = sc.nextDouble() / 3.6;
        double a = sc.nextDouble();
        double t = sc.nextDouble();
        System.out.printf("%.3f m%n", v * t + (a * t * t) / 2.0);
    }
}
