#include <bits/stdc++.h>
using namespace std;
int main(){
    while(true){
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
        int opcao;
        do {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> opcao;
        } while(opcao != 1 && opcao != 2);
        if(opcao == 2) break;
    }
}
