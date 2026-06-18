import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long x = sc.nextLong();
        long z = sc.nextLong();
        while(z <= x){
            z = sc.nextLong();
        }
        long soma = 0, atual = x;
        int qtd = 0;
        while(soma <= z){
            soma += atual;
            atual++;
            qtd++;
        }
        System.out.println(qtd);
    }
}
