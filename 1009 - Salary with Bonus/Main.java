import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        String name = sc.next();
        double salary = sc.nextDouble();
        double sales = sc.nextDouble();
        double total = salary + (sales * 0.15);
        System.out.println("TOTAL = R$ " + String.format(Locale.US, "%.2f", total));
    }
}
