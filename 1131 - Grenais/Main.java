import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int grenais = 0, inter = 0, gremio = 0, empates = 0;
        int opcao;
        do {
            int golsInter = sc.nextInt(), golsGremio = sc.nextInt();
            grenais++;
            if(golsInter > golsGremio) inter++;
            else if(golsInter < golsGremio) gremio++;
            else empates++;
            System.out.println("Novo grenal (1-sim 2-nao)");
            opcao = sc.nextInt();
        } while(opcao == 1);
        System.out.println(grenais + " grenais");
        System.out.println("Inter:" + inter);
        System.out.println("Gremio:" + gremio);
        System.out.println("Empates:" + empates);
        if(inter > gremio) System.out.println("Inter venceu mais");
        else if(gremio > inter) System.out.println("Gremio venceu mais");
        else System.out.println("Nao houve vencedor");
    }
}
