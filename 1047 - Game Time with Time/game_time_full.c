#include <stdio.h>

int main(){
    int ih, im, fh, fm;
    scanf("%d %d %d %d", &ih, &im, &fh, &fm);
    int ini = ih * 60 + im, fim = fh * 60 + fm;
    if(fim <= ini) fim += 1440;
    int dur = fim - ini;
    if(dur == 0) dur = 1440;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dur / 60, dur % 60);
    return 0;
}
