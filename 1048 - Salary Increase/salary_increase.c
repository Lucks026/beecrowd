#include <stdio.h>

int main(){
    double salario;
    int reajuste;
    scanf("%lf", &salario);
    if(salario <= 400.00) reajuste = 15;
    else if(salario <= 800.00) reajuste = 12;
    else if(salario <= 1200.00) reajuste = 10;
    else if(salario <= 2000.00) reajuste = 7;
    else reajuste = 4;
    printf("Novo salario: %.2f\n", salario * (1 + reajuste / 100.0));
    printf("Reajuste ganho: %.2f\n", salario * reajuste / 100.0);
    printf("Em percentual: %d %%\n", reajuste);
    return 0;
}
