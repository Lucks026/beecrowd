import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        for(int step = 0; step <= 10; step++){
            double i = step * 0.2;
            for(int k = 0; k < 3; k++){
                double j = 1 + i + k;
                if(step % 5 == 0){
                    System.out.println("I=" + (int) Math.round(i) + " J=" + (int) Math.round(j));
                } else {
                    System.out.printf(Locale.US, "I=%.1f J=%.1f%n", i, j);
                }
            }
        }
    }
}
