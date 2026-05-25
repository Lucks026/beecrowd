#include <bits/stdc++.h>
using namespace std;
int main(){
    int cont = 0;
    for(int i = 0; i < 5; i++){
        int n;
        cin >> n;
        if(n % 2 == 0) cont++;
    }
    cout << cont << " valores pares" << endl;
}
