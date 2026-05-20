import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] notas = {100, 50, 20, 10, 5, 2, 1};
        System.out.println(n);
        for(int nota : notas){
            System.out.println(n / nota + " nota(s) de R$ " + nota + ",00");
            n %= nota;
        }
    }
}
