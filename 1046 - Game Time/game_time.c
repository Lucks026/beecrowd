#include <stdio.h>

int main(){
    int ini, fim;
    scanf("%d %d", &ini, &fim);
    int dur;
    if(fim <= ini) dur = 24 - ini + fim;
    else dur = fim - ini;
    if(dur == 0) dur = 24;
    printf("O JOGO DUROU %d HORA(S)\n", dur);
    return 0;
}
