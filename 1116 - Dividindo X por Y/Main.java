import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = 0; i < n; i++){
            int x = sc.nextInt(), y = sc.nextInt();
            if(y == 0) System.out.println("divisao impossivel");
            else System.out.printf(Locale.US, "%.1f%n", (double) x / y);
        }
    }
}
