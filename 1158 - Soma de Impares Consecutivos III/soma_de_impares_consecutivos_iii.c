#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        long long x, y;
        scanf("%lld %lld", &x, &y);
        if(x % 2 == 0) x++;
        long long soma = 0;
        for(long long i = 0; i < y; i++)
            soma += x + 2 * i;
        printf("%lld\n", soma);
    }
    return 0;
}
