import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        int code = sc.nextInt();
        int qty = sc.nextInt();
        double unitPrice = sc.nextDouble();
        double total = qty * unitPrice;
        System.out.printf("CODIGO: %d QUANTIDADE: %d VALOR UNITARIO: R$ %.2f%n", code, qty, unitPrice);
        System.out.printf("VALOR TOTAL: R$ %.2f%n", total);
    }
}
