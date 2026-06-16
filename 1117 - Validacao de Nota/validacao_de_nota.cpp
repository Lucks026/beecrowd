#include <bits/stdc++.h>
using namespace std;
int main(){
    double notas[2];
    int validas = 0;
    while(validas < 2){
        double nota;
        cin >> nota;
        if(nota >= 0 && nota <= 10){
            notas[validas] = nota;
            validas++;
        } else {
            cout << "nota invalida" << endl;
        }
    }
    double media = (notas[0] + notas[1]) / 2.0;
    printf("media = %.2f\n", media);
}
