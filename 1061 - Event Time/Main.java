import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        sc.next();
        int d1 = sc.nextInt();
        int h1 = sc.nextInt(); sc.next();
        int m1 = sc.nextInt(); sc.next();
        int s1 = sc.nextInt();
        sc.next();
        int d2 = sc.nextInt();
        int h2 = sc.nextInt(); sc.next();
        int m2 = sc.nextInt(); sc.next();
        int s2 = sc.nextInt();
        int total = (d2*86400 + h2*3600 + m2*60 + s2) - (d1*86400 + h1*3600 + m1*60 + s1);
        int dias = total / 86400; total %= 86400;
        int horas = total / 3600; total %= 3600;
        int minutos = total / 60;
        int segundos = total % 60;
        System.out.println(dias + " dia(s)");
        System.out.println(horas + " hora(s)");
        System.out.println(minutos + " minuto(s)");
        System.out.println(segundos + " segundo(s)");
    }
}
