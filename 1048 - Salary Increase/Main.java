import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        double salario = sc.nextDouble();
        int reajuste;
        if(salario <= 400.00) reajuste = 15;
        else if(salario <= 800.00) reajuste = 12;
        else if(salario <= 1200.00) reajuste = 10;
        else if(salario <= 2000.00) reajuste = 7;
        else reajuste = 4;
        System.out.printf("Novo salario: %.2f%n", salario*(1+reajuste/100.0));
        System.out.printf("Reajuste ganho: %.2f%n", salario*reajuste/100.0);
        System.out.println("Em percentual: " + reajuste + " %");
    }
}
