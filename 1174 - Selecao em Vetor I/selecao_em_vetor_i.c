#include <stdio.h>

int main(){
    for(int i = 0; i < 100; i++){
        double v;
        scanf("%lf", &v);
        if(v <= 10) printf("A[%d] = %.1f\n", i, v);
    }
    return 0;
}
