#include <bits/stdc++.h>
using namespace std;
int main(){
    double valor;
    cin >> valor;
    int n = round(valor * 100);
    int notas[] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[] = {100, 50, 25, 10, 5, 1};
    string nNotas[] = {"100.00","50.00","20.00","10.00","5.00","2.00"};
    string nMoedas[] = {"1.00","0.50","0.25","0.10","0.05","0.01"};
    cout << "NOTAS:" << endl;
    for(int i = 0; i < 6; i++){
        cout << n / notas[i] << " nota(s) de R$ " << nNotas[i] << endl;
        n %= notas[i];
    }
    cout << "MOEDAS:" << endl;
    for(int i = 0; i < 6; i++){
        cout << n / moedas[i] << " moeda(s) de R$ " << nMoedas[i] << endl;
        n %= moedas[i];
    }
}
