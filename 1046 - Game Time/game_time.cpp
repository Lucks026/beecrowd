#include <bits/stdc++.h>
using namespace std;
int main(){
    int ini, fim; cin >> ini >> fim;
    int dur = (fim >= ini) ? fim-ini : 24-ini+fim;
    printf("O jogo durou %d hora(s)\n", dur);
}
