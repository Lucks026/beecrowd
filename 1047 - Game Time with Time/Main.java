import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int ih = sc.nextInt(), im = sc.nextInt(), fh = sc.nextInt(), fm = sc.nextInt();
        int ini = ih * 60 + im, fim = fh * 60 + fm;
        if(fim <= ini) fim += 1440;
        int dur = fim - ini;
        if(dur == 0) dur = 1440;
        System.out.println("O JOGO DUROU " + dur / 60 + " HORA(S) E " + dur % 60 + " MINUTO(S)");
    }
}
