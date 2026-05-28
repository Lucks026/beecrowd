import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        sc.useLocale(Locale.US);
        int n = sc.nextInt();
        for(int i = 0; i < n; i++){
            double a = sc.nextDouble();
            double b = sc.nextDouble();
            double c = sc.nextDouble();
            double media = (a * 2 + b * 3 + c * 5) / 10.0;
            System.out.printf(Locale.US, "%.1f\n", media);
        }
    }
}
