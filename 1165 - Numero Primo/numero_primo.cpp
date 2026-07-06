#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        long long x;
        cin >> x;
        bool primo = x > 1;
        for(long long i = 2; i * i <= x; i++){
            if(x % i == 0){
                primo = false;
                break;
            }
        }
        if(primo) cout << x << " eh primo" << endl;
        else cout << x << " nao eh primo" << endl;
    }
}
