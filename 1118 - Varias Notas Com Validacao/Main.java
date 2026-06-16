import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        sc.useLocale(Locale.US);
        while(true){
            double[] notas = new double[2];
            int validas = 0;
            while(validas < 2){
                double nota = sc.nextDouble();
                if(nota >= 0 && nota <= 10){
                    notas[validas] = nota;
                    validas++;
                } else {
                    System.out.println("nota invalida");
                }
            }
            double media = (notas[0] + notas[1]) / 2.0;
            System.out.printf(Locale.US, "media = %.2f%n", media);
            int opcao;
            do {
                System.out.println("novo calculo (1-sim 2-nao)");
                opcao = sc.nextInt();
            } while(opcao != 1 && opcao != 2);
            if(opcao == 2) break;
        }
    }
}
