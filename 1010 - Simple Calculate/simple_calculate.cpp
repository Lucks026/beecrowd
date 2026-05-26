#include <bits/stdc++.h>
using namespace std;
int main(){
    int c1, q1, c2, q2;
    double p1, p2;
    cin >> c1 >> q1 >> p1;
    cin >> c2 >> q2 >> p2;
    printf("VALOR A PAGAR: R$ %.2f\n", q1 * p1 + q2 * p2);
}
