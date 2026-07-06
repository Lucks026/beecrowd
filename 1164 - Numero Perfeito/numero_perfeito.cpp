#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        long long x;
        cin >> x;
        long long soma = 0;
        for(long long i = 1; i * i <= x; i++){
            if(x % i == 0){
                if(i < x) soma += i;
                long long j = x / i;
                if(j != i && j < x) soma += j;
            }
        }
        if(x > 0 && soma == x) cout << x << " eh perfeito" << endl;
        else cout << x << " nao eh perfeito" << endl;
    }
}
