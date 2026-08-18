#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        long long x;
        scanf("%lld", &x);
        int primo = x > 1;
        for(long long i = 2; i * i <= x; i++){
            if(x % i == 0){ primo = 0; break; }
        }
        if(primo) printf("%lld eh primo\n", x);
        else printf("%lld nao eh primo\n", x);
    }
    return 0;
}
