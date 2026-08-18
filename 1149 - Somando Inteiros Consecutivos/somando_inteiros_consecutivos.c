#include <stdio.h>

int main(){
    long long a, n;
    scanf("%lld %lld", &a, &n);
    while(n <= 0) scanf("%lld", &n);
    long long soma = 0;
    for(long long i = 0; i < n; i++) soma += a + i;
    printf("%lld\n", soma);
    return 0;
}
