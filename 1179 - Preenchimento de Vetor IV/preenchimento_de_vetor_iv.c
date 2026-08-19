#include <stdio.h>

int main(){
    int par[5], impar[5], np = 0, ni = 0;
    for(int k = 0; k < 15; k++){
        int v;
        scanf("%d", &v);
        if(v % 2 == 0){
            par[np++] = v;
            if(np == 5){
                for(int i = 0; i < 5; i++) printf("par[%d] = %d\n", i, par[i]);
                np = 0;
            }
        } else {
            impar[ni++] = v;
            if(ni == 5){
                for(int i = 0; i < 5; i++) printf("impar[%d] = %d\n", i, impar[i]);
                ni = 0;
            }
        }
    }
    for(int i = 0; i < ni; i++) printf("impar[%d] = %d\n", i, impar[i]);
    for(int i = 0; i < np; i++) printf("par[%d] = %d\n", i, par[i]);
    return 0;
}
