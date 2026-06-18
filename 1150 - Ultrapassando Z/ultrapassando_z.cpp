#include <bits/stdc++.h>
using namespace std;
int main(){
    long long x, z;
    cin >> x >> z;
    while(z <= x){
        cin >> z;
    }
    long long soma = 0, atual = x;
    int qtd = 0;
    while(soma <= z){
        soma += atual;
        atual++;
        qtd++;
    }
    cout << qtd << endl;
}
