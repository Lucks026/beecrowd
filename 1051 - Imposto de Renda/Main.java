import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        double renda = sc.nextDouble();
        if(renda <= 2000.00){
            System.out.println("Isento");
        } else {
            double imposto = 0.0;
            if(renda > 2000.00){
                double faixa = Math.min(renda, 3000.00) - 2000.00;
                imposto += faixa * 0.08;
            }
            if(renda > 3000.00){
                double faixa = Math.min(renda, 4500.00) - 3000.00;
                imposto += faixa * 0.18;
            }
            if(renda > 4500.00){
                double faixa = renda - 4500.00;
                imposto += faixa * 0.28;
            }
            System.out.printf("R$ %.2f%n", imposto);
        }
    }
}
