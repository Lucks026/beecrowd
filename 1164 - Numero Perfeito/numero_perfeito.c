#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        long long x;
        scanf("%lld", &x);
        long long soma = 0;
        for(long long i = 1; i * i <= x; i++){
            if(x % i == 0){
                if(i < x) soma += i;
                long long j = x / i;
                if(j != i && j < x) soma += j;
            }
        }
        if(x > 0 && soma == x) printf("%lld eh perfeito\n", x);
        else printf("%lld nao eh perfeito\n", x);
    }
    return 0;
}
