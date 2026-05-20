import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        double a = sc.nextDouble(), b = sc.nextDouble(), c = sc.nextDouble();
        System.out.printf("TRIANGULO: %.3f%n", (a * c) / 2.0);
        System.out.printf("CIRCULO: %.3f%n", Math.PI * b * b);
        System.out.printf("TRAPEZIO: %.3f%n", ((a + b) * c) / 2.0);
    }
}
