#include <stdio.h>

int main(){
    for(int i = 0; i < 10; i++){
        int x;
        scanf("%d", &x);
        if(x <= 0) x = 1;
        printf("X[%d] = %d\n", i, x);
    }
    return 0;
}
