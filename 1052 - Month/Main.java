import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] meses = {"", "January", "February", "March", "April",
            "May", "June", "July", "August", "September",
            "October", "November", "December"};
        System.out.println(meses[n]);
    }
}
