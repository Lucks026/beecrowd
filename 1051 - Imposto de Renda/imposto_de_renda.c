#include <stdio.h>

int main(){
    double renda;
    scanf("%lf", &renda);
    if(renda <= 2000.00){
        printf("Isento\n");
    } else {
        double imposto = 0.0;
        if(renda > 2000.00)
            imposto += ((renda < 3000.0 ? renda : 3000.0) - 2000.0) * 0.08;
        if(renda > 3000.00)
            imposto += ((renda < 4500.0 ? renda : 4500.0) - 3000.0) * 0.18;
        if(renda > 4500.00)
            imposto += (renda - 4500.0) * 0.28;
        printf("R$ %.2f\n", imposto);
    }
    return 0;
}
