import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int alcool = 0, gasolina = 0, diesel = 0, codigo;
        do {
            codigo = sc.nextInt();
            if(codigo == 1) alcool++;
            else if(codigo == 2) gasolina++;
            else if(codigo == 3) diesel++;
        } while(codigo != 4);
        System.out.println("MUITO OBRIGADO");
        System.out.println("Alcool: " + alcool);
        System.out.println("Gasolina: " + gasolina);
        System.out.println("Diesel: " + diesel);
    }
}
