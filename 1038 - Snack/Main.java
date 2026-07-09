import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        int cod = sc.nextInt(), qtd = sc.nextInt();
        double[] preco = {0, 4.00, 4.50, 5.00, 2.00, 1.50};
        System.out.printf("Total: R$ %.2f%n", qtd * preco[cod]);
    }
}
