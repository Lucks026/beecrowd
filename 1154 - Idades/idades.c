#include <stdio.h>

int main(){
    long long soma = 0;
    int qtd = 0, idade;
    while(scanf("%d", &idade) == 1){
        if(idade < 0) break;
        soma += idade;
        qtd++;
    }
    printf("%.2f\n", (double) soma / qtd);
    return 0;
}
