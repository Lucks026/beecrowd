import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int ini = sc.nextInt(), fim = sc.nextInt();
        int dur;
        if(fim <= ini) dur = 24 - ini + fim;
        else dur = fim - ini;
        if(dur == 0) dur = 24;
        System.out.println("O JOGO DUROU " + dur + " HORA(S)");
    }
}
