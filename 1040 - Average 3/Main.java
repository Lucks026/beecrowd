import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        double n1 = sc.nextDouble(), n2 = sc.nextDouble();
        double n3 = sc.nextDouble(), n4 = sc.nextDouble();
        double media = (n1*2 + n2*3 + n3*4 + n4*1) / 10.0;
        System.out.printf("Media: %.1f%n", media);
        if(media >= 7.0){
            System.out.println("Aluno aprovado.");
        } else if(media < 5.0){
            System.out.println("Aluno reprovado.");
        } else {
            System.out.println("Aluno em exame.");
            double exame = sc.nextDouble();
            System.out.printf("Nota do exame: %.1f%n", exame);
            double mediaFinal = (media + exame) / 2.0;
            if(mediaFinal >= 5.0) System.out.println("Aluno aprovado.");
            else System.out.println("Aluno reprovado.");
            System.out.printf("Media final: %.1f%n", mediaFinal);
        }
    }
}
