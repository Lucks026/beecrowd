#include <bits/stdc++.h>
using namespace std;
int main(){
    int reajuste; double salario;
    cin >> salario;
    if(salario <= 400.00) reajuste = 15;
    else if(salario <= 800.00) reajuste = 12;
    else if(salario <= 1200.00) reajuste = 10;
    else if(salario <= 2000.00) reajuste = 7;
    else reajuste = 4;
    cout << "Novo salario: " << fixed << setprecision(2) << salario*(1+reajuste/100.0) << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << salario*reajuste/100.0 << endl;
    cout << "Em percentual: " << reajuste << " %" << endl;
}
