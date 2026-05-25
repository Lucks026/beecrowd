#include <bits/stdc++.h>
using namespace std;
int main(){
    int cont = 0;
    for(int i = 0; i < 6; i++){
        double valor;
        cin >> valor;
        if(valor > 0) cont++;
    }
    cout << cont << " valores positivos" << endl;
}
