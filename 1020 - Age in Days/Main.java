import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(n / 365 + " ano(s)");
        System.out.println((n % 365) / 30 + " mes(es)");
        System.out.println((n % 365) % 30 + " dia(s)");
    }
}
