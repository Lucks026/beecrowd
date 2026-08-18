#include <stdio.h>

int main(){
    while(1){
        double notas[2];
        int validas = 0;
        while(validas < 2){
            double nota;
            scanf("%lf", &nota);
            if(nota >= 0 && nota <= 10){ notas[validas] = nota; validas++; }
            else printf("nota invalida\n");
        }
        printf("media = %.2f\n", (notas[0] + notas[1]) / 2.0);
        int opcao;
        do {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &opcao);
        } while(opcao != 1 && opcao != 2);
        if(opcao == 2) break;
    }
    return 0;
}
