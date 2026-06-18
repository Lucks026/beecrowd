import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long soma = 0;
        int qtd = 0;
        while(true){
            int idade = sc.nextInt();
            if(idade < 0) break;
            soma += idade;
            qtd++;
        }
        double media = (double) soma / qtd;
        System.out.printf(Locale.US, "%.2f%n", media);
    }
}
