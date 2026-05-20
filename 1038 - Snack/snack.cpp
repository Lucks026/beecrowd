#include <bits/stdc++.h>
using namespace std;
int main(){
    int cod, qtd; cin >> cod >> qtd;
    double preco[] = {0, 4.00, 4.50, 5.00, 2.00, 1.50};
    printf("Total: R$ %.2f\n", qtd * preco[cod]);
}
