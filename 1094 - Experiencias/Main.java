import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int coelhos = 0, ratos = 0, sapos = 0;
        for(int i = 0; i < n; i++){
            int qtd = sc.nextInt();
            String tipo = sc.next();
            char t = tipo.charAt(0);
            if(t == 'C') coelhos += qtd;
            else if(t == 'R') ratos += qtd;
            else if(t == 'S') sapos += qtd;
        }
        int total = coelhos + ratos + sapos;
        System.out.println("Total: " + total + " cobaias");
        System.out.println("Total de coelhos: " + coelhos);
        System.out.println("Total de ratos: " + ratos);
        System.out.println("Total de sapos: " + sapos);
        System.out.printf(Locale.US, "Percentual de coelhos: %.2f %%\n", (coelhos * 100.0) / total);
        System.out.printf(Locale.US, "Percentual de ratos: %.2f %%\n", (ratos * 100.0) / total);
        System.out.printf(Locale.US, "Percentual de sapos: %.2f %%\n", (sapos * 100.0) / total);
    }
}
