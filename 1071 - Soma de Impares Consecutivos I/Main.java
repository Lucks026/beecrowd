import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt(), y = sc.nextInt();
        if(x > y){ int t = x; x = y; y = t; }
        int soma = 0;
        for(int i = x + 1; i < y; i++){
            if(i % 2 != 0) soma += i;
        }
        System.out.println(soma);
    }
}
