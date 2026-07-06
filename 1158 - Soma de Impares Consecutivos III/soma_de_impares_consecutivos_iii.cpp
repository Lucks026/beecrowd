#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        long long x, y;
        cin >> x >> y;
        if(x % 2 == 0) x++;
        long long soma = 0;
        for(long long i = 0; i < y; i++){
            soma += x + 2 * i;
        }
        cout << soma << endl;
    }
}
