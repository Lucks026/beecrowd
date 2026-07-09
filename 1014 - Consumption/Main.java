import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        int dist = sc.nextInt();
        double fuel = sc.nextDouble();
        System.out.printf("%.3f km/l%n", dist / fuel);
    }
}
