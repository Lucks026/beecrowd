#include <stdio.h>

int main(){
    int d1, h1, m1, s1, d2, h2, m2, s2;
    scanf("Dia %d", &d1);
    scanf(" %d : %d : %d", &h1, &m1, &s1);
    scanf(" Dia %d", &d2);
    scanf(" %d : %d : %d", &h2, &m2, &s2);
    int total = (d2 * 86400 + h2 * 3600 + m2 * 60 + s2) - (d1 * 86400 + h1 * 3600 + m1 * 60 + s1);
    printf("%d dia(s)\n", total / 86400); total %= 86400;
    printf("%d hora(s)\n", total / 3600); total %= 3600;
    printf("%d minuto(s)\n", total / 60);
    printf("%d segundo(s)\n", total % 60);
    return 0;
}
