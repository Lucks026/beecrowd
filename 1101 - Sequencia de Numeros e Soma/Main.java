import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNextInt()){
            int m = sc.nextInt(), n = sc.nextInt();
            if(m <= 0 || n <= 0) break;
            if(m > n){ int aux = m; m = n; n = aux; }
            int soma = 0;
            for(int i = m; i <= n; i++){
                System.out.print(i + " ");
                soma += i;
            }
            System.out.println("Sum=" + soma);
        }
    }
}
