import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        long y = sc.nextLong();
        int cont = 1;
        for(long i = 1; i <= y; i++){
            if(cont <= x - 1){
                System.out.print(i + " ");
                cont++;
            } else {
                System.out.println(i);
                cont = 1;
            }
        }
    }
}
