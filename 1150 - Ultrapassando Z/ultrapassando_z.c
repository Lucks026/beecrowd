#include <stdio.h>

int main(){
    long long x, z;
    scanf("%lld %lld", &x, &z);
    while(z <= x) scanf("%lld", &z);
    long long soma = 0, atual = x;
    int qtd = 0;
    while(soma <= z){ soma += atual; atual++; qtd++; }
    printf("%d\n", qtd);
    return 0;
}
