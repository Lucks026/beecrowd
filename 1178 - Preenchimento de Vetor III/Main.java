import java.util.Scanner;
import java.util.Locale;
import java.math.BigDecimal;
import java.math.RoundingMode;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in).useLocale(Locale.US);
        double x = sc.nextDouble();
        for(int i = 0; i < 100; i++){
            BigDecimal v = new BigDecimal(x).setScale(4, RoundingMode.HALF_EVEN);
            System.out.println("N[" + i + "] = " + v.toPlainString());
            x /= 2.0;
        }
    }
}
