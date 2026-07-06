#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    while(cin >> x){
        if(x == 0) break;
        if(x % 2 != 0) x++;
        long long soma = 0;
        for(int i = 0; i < 5; i++){
            soma += x + 2 * i;
        }
        cout << soma << endl;
    }
}
