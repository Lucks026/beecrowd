import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int anos = sc.nextInt(), meses = sc.nextInt(), dias = sc.nextInt();
        System.out.println(anos * 365 + meses * 30 + dias + " dia(s)");
    }
}
