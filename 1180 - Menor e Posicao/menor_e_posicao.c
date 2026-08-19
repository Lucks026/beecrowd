#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int menor, pos = 0;
    scanf("%d", &menor);
    for(int i = 1; i < n; i++){
        int x;
        scanf("%d", &x);
        if(x < menor){ menor = x; pos = i; }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);
    return 0;
}
