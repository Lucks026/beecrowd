#include <bits/stdc++.h>
using namespace std;
int main(){
    double a, b, c;
    cin >> a >> b >> c;
    printf("TRIANGULO: %.3f\n", (a * c) / 2.0);
    printf("CIRCULO: %.3f\n", acos(-1.0) * b * b);
    printf("TRAPEZIO: %.3f\n", ((a + b) * c) / 2.0);
}
