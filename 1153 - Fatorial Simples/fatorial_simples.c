#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    long long fat = 1;
    for(int i = 2; i <= n; i++) fat *= i;
    printf("%lld\n", fat);
    return 0;
}
