#include <stdio.h>

int main(){
    int cont = 0;
    double soma = 0.0;
    for(int i = 0; i < 6; i++){
        double x;
        scanf("%lf", &x);
        if(x > 0){
            cont++;
            soma += x;
        }
    }
    printf("%d valores positivos\n", cont);
    printf("%.1f\n", soma / cont);
    return 0;
}
