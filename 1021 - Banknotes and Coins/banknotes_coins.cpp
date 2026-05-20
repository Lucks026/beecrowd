#include <bits/stdc++.h>
using namespace std;
int main(){
    double valor;
    cin >> valor;
    int n = round(valor * 100);
    int dens[] = {10000,5000,2000,1000,500,200,100,50,25,10,5,1};
    string nomes[] = {"100.00","50.00","20.00","10.00","5.00","2.00","1.00","0.50","0.25","0.10","0.05","0.01"};
    cout << fixed << setprecision(2) << valor << endl;
    for(int i = 0; i < 12; i++){
        cout << n / dens[i] << " nota(s) ou moeda(s) de R$ " << nomes[i] << endl;
        n %= dens[i];
    }
}
