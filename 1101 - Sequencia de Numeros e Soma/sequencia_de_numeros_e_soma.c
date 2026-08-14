#include <stdio.h>

int main(){
    int m, n;
    while(scanf("%d %d", &m, &n) == 2){
        if(m <= 0 || n <= 0) break;
        if(m > n){ int t = m; m = n; n = t; }
        int soma = 0;
        for(int i = m; i <= n; i++){
            printf("%d ", i);
            soma += i;
        }
        printf("Sum=%d\n", soma);
    }
    return 0;
}
