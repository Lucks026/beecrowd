import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(long i = 1; i <= n; i++){
            long quad = i * i;
            long cubo = i * i * i;
            System.out.println(i + " " + quad + " " + cubo);
            System.out.println(i + " " + (quad + 1) + " " + (cubo + 1));
        }
    }
}
