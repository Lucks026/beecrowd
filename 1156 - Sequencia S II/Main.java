import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        double s = 1.0;
        double x = 2;
        for(int i = 3; i <= 39; i += 2){
            s += i / x;
            x *= 2;
        }
        System.out.printf(Locale.US, "%.2f%n", s);
    }
}
