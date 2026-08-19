#include <stdio.h>

int main(){
    double x;
    scanf("%lf", &x);
    for(int i = 0; i < 100; i++){
        printf("N[%d] = %.4f\n", i, x);
        x /= 2.0;
    }
    return 0;
}
