import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        double a = sc.nextDouble(), b = sc.nextDouble(), c = sc.nextDouble();
        if(a < b+c && b < a+c && c < a+b){
            System.out.println("Valido");
            if(a==b && b==c) System.out.println("Equilatero");
            else if(a==b || b==c || a==c) System.out.println("Isosceles");
            else System.out.println("Escaleno");
        } else System.out.println("Invalido");
    }
}
