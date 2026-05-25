import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        int cont = 0;
        for(int i = 0; i < 6; i++){
            double valor = sc.nextDouble();
            if(valor > 0) cont++;
        }
        System.out.println(cont + " valores positivos");
    }
}
