import java.util.Scanner;
import java.util.Arrays;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        double[] arr = {sc.nextDouble(), sc.nextDouble(), sc.nextDouble()};
        Arrays.sort(arr);
        double a = arr[2], b = arr[1], c = arr[0];
        if(a >= b + c){
            System.out.println("NAO FORMA TRIANGULO");
        } else {
            if(a * a == b * b + c * c) System.out.println("TRIANGULO RETANGULO");
            else if(a * a > b * b + c * c) System.out.println("TRIANGULO OBTUSANGULO");
            else System.out.println("TRIANGULO ACUTANGULO");
            if(a == b && b == c) System.out.println("TRIANGULO EQUILATERO");
            else if(a == b || b == c) System.out.println("TRIANGULO ISOSCELES");
        }
    }
}
