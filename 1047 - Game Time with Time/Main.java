import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int ih=sc.nextInt(), im=sc.nextInt(), fh=sc.nextInt(), fm=sc.nextInt();
        int ini=ih*60+im, fim=fh*60+fm;
        int dur = (fim >= ini) ? fim-ini : 1440-ini+fim;
        System.out.println("O jogo durou " + dur/60 + "h" + dur%60 + "m");
    }
}
