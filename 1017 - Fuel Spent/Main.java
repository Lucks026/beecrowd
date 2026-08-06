import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        double tempo = sc.nextDouble(), velocidade = sc.nextDouble();
        System.out.printf("%.3f%n", tempo * velocidade / 12.0);
    }
}
