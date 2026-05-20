#include <bits/stdc++.h>
using namespace std;
int main(){
    int ih, im, fh, fm;
    cin >> ih >> im >> fh >> fm;
    int ini = ih*60+im, fim = fh*60+fm;
    int dur = (fim >= ini) ? fim-ini : 1440-ini+fim;
    printf("O jogo durou %dh%dm\n", dur/60, dur%60);
}
