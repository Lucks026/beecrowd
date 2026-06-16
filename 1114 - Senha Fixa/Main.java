import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int senha;
        while((senha = sc.nextInt()) != 2002){
            System.out.println("Senha Invalida");
        }
        System.out.println("Acesso Permitido");
    }
}
