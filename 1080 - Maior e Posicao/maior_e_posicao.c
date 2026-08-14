#include <stdio.h>

int main(){
    int maior, x, pos = 1;
    scanf("%d", &maior);
    for(int i = 2; i <= 100; i++){
        scanf("%d", &x);
        if(x > maior){ maior = x; pos = i; }
    }
    printf("%d\n%d\n", maior, pos);
    return 0;
}
