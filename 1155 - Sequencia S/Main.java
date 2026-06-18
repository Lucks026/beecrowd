import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        double s = 0;
        for(int i = 1; i <= 100; i++){
            s += 1.0 / i;
        }
        System.out.printf(Locale.US, "%.2f%n", s);
    }
}
