import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        while(n-- > 0){
            long x = sc.nextLong();
            boolean primo = x > 1;
            for(long i = 2; i * i <= x; i++){
                if(x % i == 0){
                    primo = false;
                    break;
                }
            }
            if(primo) System.out.println(x + " eh primo");
            else System.out.println(x + " nao eh primo");
        }
    }
}
