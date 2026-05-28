import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = 0; i < n; i++){
            int x = sc.nextInt();
            if(x == 0){
                System.out.println("NULL");
            } else {
                String paridade = (x % 2 == 0) ? "EVEN" : "ODD";
                String sinal = (x > 0) ? "POSITIVE" : "NEGATIVE";
                System.out.println(paridade + " " + sinal);
            }
        }
    }
}
