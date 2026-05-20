import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        double valor = sc.nextDouble();
        int n = (int) Math.round(valor * 100);
        int[] dens = {10000,5000,2000,1000,500,200,100,50,25,10,5,1};
        String[] nomes = {"100.00","50.00","20.00","10.00","5.00","2.00","1.00","0.50","0.25","0.10","0.05","0.01"};
        System.out.printf("%.2f%n", valor);
        for(int i = 0; i < 12; i++){
            System.out.println(n / dens[i] + " nota(s) ou moeda(s) de R$ " + nomes[i]);
            n %= dens[i];
        }
    }
}
