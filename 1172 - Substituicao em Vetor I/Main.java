import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for(int i = 0; i < 10; i++){
            int x = sc.nextInt();
            if(x <= 0) x = 1;
            System.out.println("X[" + i + "] = " + x);
        }
    }
}
