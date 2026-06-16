#include <bits/stdc++.h>
using namespace std;
int main(){
    int grenais = 0, inter = 0, gremio = 0, empates = 0;
    int opcao;
    do {
        int golsInter, golsGremio;
        cin >> golsInter >> golsGremio;
        grenais++;
        if(golsInter > golsGremio) inter++;
        else if(golsInter < golsGremio) gremio++;
        else empates++;
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> opcao;
    } while(opcao == 1);
    cout << grenais << " grenais" << endl;
    cout << "Inter:" << inter << endl;
    cout << "Gremio:" << gremio << endl;
    cout << "Empates:" << empates << endl;
    if(inter > gremio) cout << "Inter venceu mais" << endl;
    else if(gremio > inter) cout << "Gremio venceu mais" << endl;
    else cout << "Nao houve vencedor" << endl;
}
