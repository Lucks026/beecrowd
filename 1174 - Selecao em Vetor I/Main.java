import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        for(int i = 0; i < 100; i++){
            double v = sc.nextDouble();
            if(v <= 10) System.out.printf("A[%d] = %.1f%n", i, v);
        }
    }
}
