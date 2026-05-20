#include <bits/stdc++.h>
using namespace std;
int main(){
    double a, b, c; cin >> a >> b >> c;
    if(a < b+c && b < a+c && c < a+b){
        cout << "Valido" << endl;
        if(a==b && b==c) cout << "Equilatero" << endl;
        else if(a==b || b==c || a==c) cout << "Isosceles" << endl;
        else cout << "Escaleno" << endl;
    } else cout << "Invalido" << endl;
}
