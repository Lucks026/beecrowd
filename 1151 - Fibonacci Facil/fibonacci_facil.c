#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    long long a = 0, b = 1;
    for(int i = 0; i < n; i++){
        printf("%lld", a);
        if(i < n - 1) printf(" ");
        long long prox = a + b;
        a = b; b = prox;
    }
    printf("\n");
    return 0;
}
