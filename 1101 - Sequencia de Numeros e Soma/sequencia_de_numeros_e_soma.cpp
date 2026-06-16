#include <bits/stdc++.h>
using namespace std;
int main(){
    int m, n;
    while(cin >> m >> n){
        if(m <= 0 || n <= 0) break;
        if(m > n) swap(m, n);
        int soma = 0;
        for(int i = m; i <= n; i++){
            cout << i << " ";
            soma += i;
        }
        cout << "Sum=" << soma << endl;
    }
}
