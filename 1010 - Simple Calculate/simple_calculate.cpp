#include <bits/stdc++.h>
using namespace std;

int main(){
    int code, qty;
    double unitPrice;
    cin >> code >> qty >> unitPrice;
    printf("CODIGO: %d QUANTIDADE: %d VALOR UNITARIO: R$ %.2f\n", code, qty, unitPrice);
    printf("VALOR TOTAL: R$ %.2f\n", qty * unitPrice);
}
