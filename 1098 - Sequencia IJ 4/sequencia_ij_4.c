#include <stdio.h>
#include <math.h>

int main(){
    for(int step = 0; step <= 10; step++){
        double i = step * 0.2;
        for(int k = 0; k < 3; k++){
            double j = 1 + i + k;
            if(step % 5 == 0)
                printf("I=%d J=%d\n", (int) round(i), (int) round(j));
            else
                printf("I=%.1f J=%.1f\n", i, j);
        }
    }
    return 0;
}
