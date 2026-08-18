#include <stdio.h>

int main(){
    int x;
    while(scanf("%d", &x) == 1){
        if(x == 0) break;
        if(x % 2 != 0) x++;
        long long soma = 0;
        for(int i = 0; i < 5; i++)
            soma += x + 2 * i;
        printf("%lld\n", soma);
    }
    return 0;
}
