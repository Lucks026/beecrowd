#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, n;
    cin >> a >> n;
    while(n <= 0){
        cin >> n;
    }
    long long soma = 0;
    for(long long i = 0; i < n; i++){
        soma += a + i;
    }
    cout << soma << endl;
}
