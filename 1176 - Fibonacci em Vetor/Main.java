import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        long[] fib = new long[61];
        fib[0] = 0;
        fib[1] = 1;
        for(int i = 2; i <= 60; i++) fib[i] = fib[i - 1] + fib[i - 2];
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            System.out.println("Fib(" + n + ") = " + fib[n]);
        }
    }
}
