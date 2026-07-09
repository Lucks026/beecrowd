import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        int cont = 0;
        double soma = 0.0;
        for(int i = 0; i < 6; i++){
            double x = sc.nextDouble();
            if(x > 0){
                cont++;
                soma += x;
            }
        }
        System.out.println(cont + " valores positivos");
        System.out.printf("%.1f%n", soma / cont);
    }
}
