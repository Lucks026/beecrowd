import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int menor = sc.nextInt(), pos = 0;
        for(int i = 1; i < n; i++){
            int x = sc.nextInt();
            if(x < menor){ menor = x; pos = i; }
        }
        System.out.println("Menor valor: " + menor);
        System.out.println("Posicao: " + pos);
    }
}
