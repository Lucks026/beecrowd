import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        double a = sc.nextDouble(), b = sc.nextDouble(), c = sc.nextDouble();
        double delta = b*b - 4*a*c;
        if(delta < 0 || a == 0) System.out.println("Impossivel calcular");
        else {
            System.out.printf("R1 = %.5f%n", (-b + Math.sqrt(delta)) / (2*a));
            System.out.printf("R2 = %.5f%n", (-b - Math.sqrt(delta)) / (2*a));
        }
    }
}
