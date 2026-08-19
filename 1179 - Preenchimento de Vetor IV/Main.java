import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] par = new int[5];
        int[] impar = new int[5];
        int np = 0, ni = 0;
        for(int k = 0; k < 15; k++){
            int v = sc.nextInt();
            if(v % 2 == 0){
                par[np++] = v;
                if(np == 5){
                    for(int i = 0; i < 5; i++) System.out.println("par[" + i + "] = " + par[i]);
                    np = 0;
                }
            } else {
                impar[ni++] = v;
                if(ni == 5){
                    for(int i = 0; i < 5; i++) System.out.println("impar[" + i + "] = " + impar[i]);
                    ni = 0;
                }
            }
        }
        for(int i = 0; i < ni; i++) System.out.println("impar[" + i + "] = " + impar[i]);
        for(int i = 0; i < np; i++) System.out.println("par[" + i + "] = " + par[i]);
    }
}
