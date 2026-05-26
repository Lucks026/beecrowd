import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        double valor = sc.nextDouble();
        int n = (int) Math.round(valor * 100);
        int[] notas = {10000, 5000, 2000, 1000, 500, 200};
        int[] moedas = {100, 50, 25, 10, 5, 1};
        String[] nNotas = {"100.00","50.00","20.00","10.00","5.00","2.00"};
        String[] nMoedas = {"1.00","0.50","0.25","0.10","0.05","0.01"};
        System.out.println("NOTAS:");
        for(int i = 0; i < 6; i++){
            System.out.println(n / notas[i] + " nota(s) de R$ " + nNotas[i]);
            n %= notas[i];
        }
        System.out.println("MOEDAS:");
        for(int i = 0; i < 6; i++){
            System.out.println(n / moedas[i] + " moeda(s) de R$ " + nMoedas[i]);
            n %= moedas[i];
        }
    }
}
