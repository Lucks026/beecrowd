import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        while(n-- > 0){
            long x = sc.nextLong();
            long soma = 0;
            for(long i = 1; i * i <= x; i++){
                if(x % i == 0){
                    if(i < x) soma += i;
                    long j = x / i;
                    if(j != i && j < x) soma += j;
                }
            }
            if(x > 0 && soma == x) System.out.println(x + " eh perfeito");
            else System.out.println(x + " nao eh perfeito");
        }
    }
}
