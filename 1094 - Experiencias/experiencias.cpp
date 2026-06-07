#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int coelhos = 0, ratos = 0, sapos = 0;
    for(int i = 0; i < n; i++){
        int qtd;
        char t;
        cin >> qtd >> t;
        if(t == 'C') coelhos += qtd;
        else if(t == 'R') ratos += qtd;
        else if(t == 'S') sapos += qtd;
    }
    int total = coelhos + ratos + sapos;
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2f %%\n", (coelhos * 100.0) / total);
    printf("Percentual de ratos: %.2f %%\n", (ratos * 100.0) / total);
    printf("Percentual de sapos: %.2f %%\n", (sapos * 100.0) / total);
}
