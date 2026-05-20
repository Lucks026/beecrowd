import java.util.Scanner;
import java.util.Arrays;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        double[] arr = {sc.nextDouble(), sc.nextDouble(), sc.nextDouble()};
        double a=arr[0], b=arr[1], c=arr[2];
        if(a < b+c && b < a+c && c < a+b){
            Arrays.sort(arr);
            double x=arr[0], y=arr[1], z=arr[2];
            if(z*z == x*x+y*y) System.out.println("Retangulo");
            else if(z*z > x*x+y*y) System.out.println("Obtusangulo");
            else System.out.println("Acutangulo");
        } else System.out.println("Invalido");
    }
}
