#include <stdio.h>

int main(){
    int grenais = 0, inter = 0, gremio = 0, empates = 0, opcao;
    do {
        int gi, gg;
        scanf("%d %d", &gi, &gg);
        grenais++;
        if(gi > gg) inter++;
        else if(gi < gg) gremio++;
        else empates++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &opcao);
    } while(opcao == 1);
    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empates);
    if(inter > gremio) printf("Inter venceu mais\n");
    else if(gremio > inter) printf("Gremio venceu mais\n");
    else printf("Nao houve vencedor\n");
    return 0;
}
