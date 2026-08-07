import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        double a = sc.nextDouble(), b = sc.nextDouble(), c = sc.nextDouble();
        if(a < b + c && b < a + c && c < a + b)
            System.out.printf("Perimetro = %.1f%n", a + b + c);
        else
            System.out.printf("Area = %.1f%n", ((a + b) * c) / 2.0);
    }
}
