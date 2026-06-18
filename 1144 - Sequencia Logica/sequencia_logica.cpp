#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(long long i = 1; i <= n; i++){
        long long quad = i * i;
        long long cubo = i * i * i;
        cout << i << " " << quad << " " << cubo << endl;
        cout << i << " " << quad + 1 << " " << cubo + 1 << endl;
    }
}
