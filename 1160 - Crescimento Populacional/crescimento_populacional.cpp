#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long pa, pb;
        double g1, g2;
        cin >> pa >> pb >> g1 >> g2;
        int anos = 0;
        while(pa <= pb && anos < 101){
            pa += (long long)(pa * g1 / 100);
            pb += (long long)(pb * g2 / 100);
            anos++;
        }
        if(anos > 100) cout << "Mais de 1 seculo." << endl;
        else cout << anos << " anos." << endl;
    }
}
