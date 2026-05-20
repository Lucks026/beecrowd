import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        double a = sc.nextDouble(), b = sc.nextDouble(), c = sc.nextDouble(), d = sc.nextDouble();
        double media = (a + b + c + d) / 4.0;
        System.out.printf("Media: %.1f%n", media);
        if(media >= 7.0) System.out.println("Aluno aprovado.");
        else if(media >= 5.0) System.out.println("Aluno em recuperacao.");
        else System.out.println("Aluno reprovado.");
    }
}
