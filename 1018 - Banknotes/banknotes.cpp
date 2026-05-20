#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    cout << n << endl;
    for(int nota : notas){
        cout << n / nota << " nota(s) de R$ " << nota << ",00" << endl;
        n %= nota;
    }
}
