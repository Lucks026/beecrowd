#include <stdio.h>
#include <math.h>

int main(){
    double valor;
    scanf("%lf", &valor);
    int n = (int) round(valor * 100);
    int notas[] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[] = {100, 50, 25, 10, 5, 1};
    const char *nNotas[] = {"100.00", "50.00", "20.00", "10.00", "5.00", "2.00"};
    const char *nMoedas[] = {"1.00", "0.50", "0.25", "0.10", "0.05", "0.01"};
    printf("NOTAS:\n");
    for(int i = 0; i < 6; i++){
        printf("%d nota(s) de R$ %s\n", n / notas[i], nNotas[i]);
        n %= notas[i];
    }
    printf("MOEDAS:\n");
    for(int i = 0; i < 6; i++){
        printf("%d moeda(s) de R$ %s\n", n / moedas[i], nMoedas[i]);
        n %= moedas[i];
    }
    return 0;
}
