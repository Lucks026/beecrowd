#include <stdio.h>

int main(){
    int cont = 0;
    for(int i = 0; i < 6; i++){
        double valor;
        scanf("%lf", &valor);
        if(valor > 0) cont++;
    }
    printf("%d valores positivos\n", cont);
    return 0;
}
