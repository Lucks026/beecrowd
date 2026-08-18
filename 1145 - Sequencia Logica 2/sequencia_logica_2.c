#include <stdio.h>

int main(){
    int x;
    long long y;
    scanf("%d %lld", &x, &y);
    int cont = 1;
    for(long long i = 1; i <= y; i++){
        if(cont <= x - 1){ printf("%lld ", i); cont++; }
        else { printf("%lld\n", i); cont = 1; }
    }
    return 0;
}
