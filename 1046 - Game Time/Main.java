import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int ini = sc.nextInt(), fim = sc.nextInt();
        int dur = (fim >= ini) ? fim-ini : 24-ini+fim;
        System.out.println("O jogo durou " + dur + " hora(s)");
    }
}
