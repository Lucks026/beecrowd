import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt(), y = sc.nextInt();
        if(x > y){ int aux = x; x = y; y = aux; }
        int soma = 0;
        for(int i = x; i <= y; i++){
            if(i % 13 != 0) soma += i;
        }
        System.out.println(soma);
    }
}
