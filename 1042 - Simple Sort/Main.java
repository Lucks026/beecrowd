import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();
        int[] sorted = {a, b, c};
        Arrays.sort(sorted);
        for(int n : sorted) System.out.println(n);
        System.out.println();
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
    }
}
