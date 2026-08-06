#include <stdio.h>

int main(){
    double tempo, velocidade;
    scanf("%lf %lf", &tempo, &velocidade);
    printf("%.3f\n", tempo * velocidade / 12.0);
    return 0;
}
