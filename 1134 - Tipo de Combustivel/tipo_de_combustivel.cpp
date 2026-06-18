#include <bits/stdc++.h>
using namespace std;
int main(){
    int alcool = 0, gasolina = 0, diesel = 0, codigo;
    do {
        cin >> codigo;
        if(codigo == 1) alcool++;
        else if(codigo == 2) gasolina++;
        else if(codigo == 3) diesel++;
    } while(codigo != 4);
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;
}
