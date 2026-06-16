import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNextInt()){
            int x = sc.nextInt(), y = sc.nextInt();
            if(x == y) break;
            if(x < y) System.out.println("Crescente");
            else System.out.println("Decrescente");
        }
    }
}
