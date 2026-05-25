#include <bits/stdc++.h>
using namespace std;
int main(){
    double renda;
    cin >> renda;
    if(renda <= 2000.00){
        cout << "Isento" << endl;
    } else {
        double imposto = 0.0;
        if(renda > 2000.00)
            imposto += (min(renda, 3000.0) - 2000.0) * 0.08;
        if(renda > 3000.00)
            imposto += (min(renda, 4500.0) - 3000.0) * 0.18;
        if(renda > 4500.00)
            imposto += (renda - 4500.0) * 0.28;
        cout << "R$ " << fixed << setprecision(2) << imposto << endl;
    }
}
