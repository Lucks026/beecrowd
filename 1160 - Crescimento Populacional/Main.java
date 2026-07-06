import java.util.Scanner;
import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        sc.useLocale(Locale.US);
        int t = sc.nextInt();
        while(t-- > 0){
            long pa = sc.nextLong();
            long pb = sc.nextLong();
            double g1 = sc.nextDouble();
            double g2 = sc.nextDouble();
            int anos = 0;
            while(pa <= pb && anos < 101){
                pa += (long)(pa * g1 / 100);
                pb += (long)(pb * g2 / 100);
                anos++;
            }
            if(anos > 100) System.out.println("Mais de 1 seculo.");
            else System.out.println(anos + " anos.");
        }
    }
}
