import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        System.out.println(t / 3600 + " hora(s)");
        System.out.println((t % 3600) / 60 + " minuto(s)");
        System.out.println(t % 60 + " segundo(s)");
    }
}
