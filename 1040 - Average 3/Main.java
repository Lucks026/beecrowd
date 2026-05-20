import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        double a = sc.nextDouble(), b = sc.nextDouble(), c = sc.nextDouble();
        double media = (a*2 + b*3 + c*5) / 10.0;
        System.out.printf("Media: %.1f%n", media);
        if(media >= 5.0){
            System.out.println("Aluno aprovado.");
        } else {
            double exame = sc.nextDouble();
            double mediaFinal = (media + exame) / 2.0;
            System.out.println("Aluno em exame final.");
            System.out.printf("Media final: %.1f%n", mediaFinal);
            if(mediaFinal >= 5.0) System.out.println("Aluno aprovado.");
            else System.out.println("Aluno reprovado.");
        }
    }
}
