import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong();
        long n = sc.nextLong();
        while(n <= 0){
            n = sc.nextLong();
        }
        long soma = 0;
        for(long i = 0; i < n; i++){
            soma += a + i;
        }
        System.out.println(soma);
    }
}
