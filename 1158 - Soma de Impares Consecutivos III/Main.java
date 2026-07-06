import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int t = 0; t < n; t++){
            long x = sc.nextLong();
            long y = sc.nextLong();
            if(x % 2 == 0) x++;
            long soma = 0;
            for(long i = 0; i < y; i++){
                soma += x + 2 * i;
            }
            System.out.println(soma);
        }
    }
}
