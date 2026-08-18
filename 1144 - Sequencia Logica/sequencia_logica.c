#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(long long i = 1; i <= n; i++){
        long long quad = i * i, cubo = i * i * i;
        printf("%lld %lld %lld\n", i, quad, cubo);
        printf("%lld %lld %lld\n", i, quad + 1, cubo + 1);
    }
    return 0;
}
