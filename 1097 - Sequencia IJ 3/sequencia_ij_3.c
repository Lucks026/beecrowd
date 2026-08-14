#include <stdio.h>

int main(){
    for(int i = 1; i <= 9; i += 2){
        int jStart = i + 6;
        for(int j = jStart; j >= jStart - 2; j--)
            printf("I=%d J=%d\n", i, j);
    }
    return 0;
}
