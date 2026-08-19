#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int menor, pos = 0;
    cin >> menor;
    for(int i = 1; i < n; i++){
        int x;
        cin >> x;
        if(x < menor){ menor = x; pos = i; }
    }
    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << pos << endl;
}
