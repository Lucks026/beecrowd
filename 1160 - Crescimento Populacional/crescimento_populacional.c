#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long pa, pb;
        double g1, g2;
        scanf("%lld %lld %lf %lf", &pa, &pb, &g1, &g2);
        int anos = 0;
        while(pa <= pb && anos < 101){
            pa += (long long)(pa * g1 / 100);
            pb += (long long)(pb * g2 / 100);
            anos++;
        }
        if(anos > 100) printf("Mais de 1 seculo.\n");
        else printf("%d anos.\n", anos);
    }
    return 0;
}
