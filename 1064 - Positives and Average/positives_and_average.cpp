#include <bits/stdc++.h>
using namespace std;
int main(){
    int cont = 0;
    double soma = 0.0;
    for(int i = 0; i < 6; i++){
        double x;
        cin >> x;
        if(x > 0){
            cont++;
            soma += x;
        }
    }
    cout << cont << " valores positivos" << endl;
    cout << fixed << setprecision(1) << soma / cont << endl;
}
