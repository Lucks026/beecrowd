#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    if(x > y){ int t = x; x = y; y = t; }
    int soma = 0;
    for(int i = x; i <= y; i++)
        if(i % 13 != 0) soma += i;
    printf("%d\n", soma);
    return 0;
}
