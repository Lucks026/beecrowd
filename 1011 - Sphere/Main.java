import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        double r = sc.nextDouble();
        double volume = (4.0 / 3.0) * Math.PI * r * r * r;
        System.out.printf("VOLUME = %.4f%n", volume);
    }
}
