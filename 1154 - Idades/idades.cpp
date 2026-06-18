#include <bits/stdc++.h>
using namespace std;
int main(){
    long long soma = 0;
    int qtd = 0, idade;
    while(cin >> idade){
        if(idade < 0) break;
        soma += idade;
        qtd++;
    }
    double media = (double) soma / qtd;
    printf("%.2f\n", media);
}
