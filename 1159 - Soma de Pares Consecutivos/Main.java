import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNextInt()){
            int x = sc.nextInt();
            if(x == 0) break;
            if(x % 2 != 0) x++;
            long soma = 0;
            for(int i = 0; i < 5; i++){
                soma += x + 2 * i;
            }
            System.out.println(soma);
        }
    }
}
