#include <stdio.h>

int main(){
    double s = 1.0, x = 2;
    for(int i = 3; i <= 39; i += 2){
        s += i / x;
        x *= 2;
    }
    printf("%.2f\n", s);
    return 0;
}
